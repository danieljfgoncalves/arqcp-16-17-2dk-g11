/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data

.global ptrvec				# integer pointer to vec (32-bit).
.global num					# integer variable (32-bit).

.section .text

.global vec_sum_even		# int vec_sum_even(void)

vec_sum_even:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# body of the function

	movl $0, %eax			# clears eax
	movl ptrvec, %esi		# moves ptr1 to esi (source)
	movl num, %ecx			# moves num to ecx (count register for loop instruction)
	movl $1, %ebx			# moves value 1 to ebx (to use in testl instruction)
	
	cmpl $0, %ecx			# compares ecx to 0 (ecx - 0), vec is empty
	je end					# jumps to end
	
sum_loop:
	
	testl (%esi), %ebx		# tests value pointed by esi and ebx (value 1). AND returns 1 if least significant bit of eax is 1.
							# (ex. 1101 0101 AND 0000 0001 = 0000 0001 or 1101 0100 AND 0000 0001 = 0000 0000)
	jne skip		 		# jne jumps to skip if ZF=0 (odd)

	addl (%esi), %eax		# adds value pointed by esi to eax (even)

skip:
	addl $4, %esi			# increments esi by 4 bytes (next int)
	loop sum_loop			# loops and decrements ecx by 1, until ecx is 0
	
end:
# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

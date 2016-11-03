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

.global vec_sum				# int vec_sum(void)

vec_sum:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# body of the function

	movl $0, %eax			# clears eax
	movl ptrvec, %esi		# moves ptr1 to esi (source)
	movl num, %ecx			# moves num to ecx (count register for loop instruction)
	
	cmpl $0, %ecx			# compares ecx to 0 (ecx - 0), vec is empty
	je end					# jumps to end
	
sum_loop:
	addl (%esi), %eax		# adds value pointed by esi to eax
	addl $4, %esi			# increments esi by 4 bytes (next int)
	
	loop sum_loop			# loops and decrements ecx by 1, until ecx is 0
	
end:
# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

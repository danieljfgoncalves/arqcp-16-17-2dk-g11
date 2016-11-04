/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data

.global ptrvec				# short pointer to vec (32-bit)
.global num					# integer variable (32-bit)

.equ VALUE, 1000			# constant with value to test

.section .text

.global vec_zero			# int vec_sum_even(void)

vec_zero:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# body of the function

	movl $0, %eax			# clears eax
	movl ptrvec, %esi		# moves ptr1 to esi (source)
	movl num, %ecx			# moves num to ecx (count register for loop instruction)
	
	cmpl $0, %ecx			# compares ecx to 0 (ecx - 0), vec is empty
	je end					# jumps to end
	
zero_loop:
	
	movw (%esi), %bx		# moves value pointed by esi to bx
	cmpw $VALUE, %bx		# compares bx to VALUE (ebx - VALUE)
	jl skip					# if not greater or equal than VALUE jump to skip		
	movw $0, (%esi)			# moves 0 to value pointed by esi
	incl %eax				# increments eax by 1

skip:
	addl $2, %esi			# increments esi by 2 bytes (next short int)
	loop zero_loop			# loops and decrements ecx by 1, until ecx is 0
	
end:
# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

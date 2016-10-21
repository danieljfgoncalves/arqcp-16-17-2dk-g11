/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
.global a
.global b
.global c
.global d

.section .text
.global math_operation    	# int math_operation(void)


math_operation:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
 	movl c, %eax		# moves c to eax
	imull b, %eax		# multiply value in b with eax (result stored in eax)
	movl $0, %edx		# clears edx
	idivl d				# divides d by eax (result stored in eax)
	addl a, %eax		# adds value of a to eax
						# eax is the return value

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

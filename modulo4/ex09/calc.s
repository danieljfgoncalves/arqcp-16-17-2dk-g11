/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * CALC.S
 * 
 */

.section .data

.section .text
.global calc  # int calc(int a, int* b, int c)

calc:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# save callee registers
	pushl %esi
	
# reserves space for local variable (z)
	subl $4, %esp
	
# body of the function
	movl 12(%ebp), %esi
	movl (%esi), %eax
	
	subl 8(%ebp), %eax
	movl %eax, -4(%ebp)
	movl 16(%ebp), %eax
	imull -4(%ebp)
	
# restore calle registers
	popl %esi

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

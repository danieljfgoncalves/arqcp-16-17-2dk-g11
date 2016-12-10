/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ACTIVATE_INVERT_BITS.S
 * 
 */

.section .data

.section .text
.global activate_invert_bits  # int activate_invert_bits(int a, int left, int right)

activate_invert_bits:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	pushl 16(%ebp)
	pushl 12(%ebp)
	pushl 8(%ebp)
	call activate_bits
	addl $16, %esp
	NOTl %eax


# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

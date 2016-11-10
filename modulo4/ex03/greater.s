/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * GREATER.S
 * 
 */

.section .data

.section .text
.global greater  # int greater(int a, int b, int c)

greater:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl 8(%ebp), %eax		# moves a to eax
	cmpl 12(%ebp), %eax		# compares a with b (a - b)
	jnl greater_in_eax 		# if (a >= b) (not less), jumps to greater_in_eax
	
	movl 12(%ebp), %eax		# if (a < b), b is moved to eax
	
greater_in_eax:
	cmpl 16(%ebp), %eax		# compares eax (contains greatest value of a or b) with c
	jnl end					# if current value in eax is greater than c, jumps to end
		
	movl 16(%ebp), %eax		# moves c to eax
	
end:

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

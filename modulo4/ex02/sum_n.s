/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * SUM_N.S
 * 
 */

.section .data

.section .text
.global sum_n    # int sum_n(int n)

sum_n:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	
	movl $0, %eax
	movl 8(%ebp), %ecx

sum_loop:
	
	addl %ecx, %eax
	loop sum_loop
	

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

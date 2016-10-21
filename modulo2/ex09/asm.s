/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
.global op1
.global op2

.section .text
.global sum2ints    	# long long int sum2ints(void)


sum2ints:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl op1, %eax   	# place op1 in eax (32-bit register)
	addl op2, %eax     	# adds op2 to eax
	movl $0, %edx		# clears the values in edx
	adcl $0, %edx		# adds 0 to edx and carry value if it exists
	
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
res:						
	.int 0				# 32-bit variable
	
.global res
.global op1
.global op2

.section .text
.global sum    			# int sum(void)
.global subtraction		# int subtraction(void)
.global multiplication	# int multiplication(void)
.global division		# int division(void)
.global modulus			# int modulus(void)

sum:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movw op1, %ax		# moves op1 to ax
	addw op2, %ax		# adds op2 to ax
						# return is ax

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret


subtraction:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movw op1, %ax		# moves op1 to ax
	subw op2, %ax		# subtracts op2 to ax
						# return is ax

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret


multiplication:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movw op1, %ax		# moves op1 to ax
	imulw op2			# multiply op2 to ax
						# return is ax

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret


division:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movw $0, %dx		# clears edx
	movw op1, %ax		# moves op1 to ax
	idivw op2			# divides ax with op2
						# return is ax

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret


modulus:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movw $0, %dx		# clears edx
	movw op1, %ax		# moves op1 to ax
	idivw op2			# divides ax with op2
	movw %dx, %ax		# moves reminder of divion from dx to ax
						# return is ax

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * CALCULATE.S
 * 
 */

.section .data
.equ CHAR_SOMA, 43		# constante com o codigo ascii '+'
.equ CHAR_MUL, 42		# constante com o codigo ascii '*'

.section .text
.global calculate    	# int calculate(int a, int b)

calculate:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# reserve space for local variables
	subl $8, %esp		# reserves 8 bytes (2 ints) for local variables (int sum, product)

# body of the function
	
	movl 8(%ebp), %eax		# moves 1st param (a) to eax
	addl 12(%ebp), %eax		# adds 2nd param (b) to eax
	movl %eax, -4(%ebp)		# moves eax to 1st local variable (sum)
	
	movl 8(%ebp), %eax		# moves 1st param (a) to eax
	imull 12(%ebp)			# multiplies 2nd param (b) by eax
	movl %eax, -8(%ebp)		# moves eax to 2nd local variable (product)
	
	# 1st call print_result(char op, int o1, int o2, int res) (from main.c)
	pushl -4(%ebp)			# pushes sum to 4th param
	pushl 8(%ebp)			# pushes a to 3rd param
	pushl 12(%ebp)			# pushes b to 2nd param
	pushl $CHAR_SOMA		# pushes '+' to 1st param
	# no need to save registers
	call print_result		# calls print_result (function in c)
	
	# 2nd call print_result(char op, int o1, int o2, int res) (from main.c)
	pushl -8(%ebp)			# pushes product to 4th param
	pushl 8(%ebp)			# pushes a to 3rd param
	pushl 12(%ebp)			# pushes b to 2nd param
	pushl $CHAR_MUL			# pushes '*' to 1st param
	# no need to save registers
	call print_result		# calls print_result (function in c)
	
	# Return value
	movl -4(%ebp), %eax		# moves 1st lcl var (sum) to eax
	subl -8(%ebp), %eax		# subtracts 2nd lcl var (product) to eax (sum - product)

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

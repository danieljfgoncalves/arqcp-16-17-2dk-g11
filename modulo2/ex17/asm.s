/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
.global fib_term
.global b

.section .text
.global fibonacci_term  # int fibonacci_term(void)

fibonacci_term:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl number, %eax	# moves number (for loop limit) to eax
	movl $1, %ebx		# iterating index in ebx (i=1)
	movl $0, %ecx		# moves first element of the fibonacci sequence (0) to ecx
	
my_loop:				# loop start

	cmpl %eax, %ebx		# compares index with limit value (number)
	jge end_my_loop		# jump if i >= number
	
	movl %ecx, %edx		# moves ecx to edx (edx works as a temporary variable)
	addl b, %ecx		# adds b (last fibonacci term) to ecx
	movl %edx, b		# moves edx to b (copy of last ecx value (stored in edx) to b)
	
	addw $1, %bx		# increments index (i++)
	jmp my_loop			# continues loop
	
end_my_loop:			
	movl %ecx, %eax		# moves ecx to eax
						# return in eax
	

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

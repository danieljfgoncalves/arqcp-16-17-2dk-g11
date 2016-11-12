/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * mixed_sum.s
 * 
 */

.section .data

.section .text
.global mixed_sum    	# int mixed_sum(int a, int b, int pos)

mixed_sum:
# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function

# body of the function
	
	pushl 16(%ebp)		# sets 3rd param with received 3rd param
	pushl 12(%ebp)		# sets 2nd param with received 2nd param
	pushl 8(%ebp)		# sets 1st param with received 1st param
	call join_bits		# calls join_bits
	addl $12, %esp		# clears params
	
	movl %eax, %edx		# moves eax (return) to edx
	
	push %edx			# saves callers edx register
	
	pushl 16(%ebp)		# sets 3rd param with received 3rd param
	pushl 8(%ebp)		# sets 2nd param with received 1st param
	pushl 12(%ebp)		# sets 1st param with received 2nd param
	call join_bits		# calls join_bits
	addl $12, %esp		# clears params
	
	popl %edx			# restores callers edx register
	
	addl %edx, %eax		# adds edx to eax

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

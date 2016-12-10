/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * COUNT_EVEN_MATRIX.S
 * 
 */

.section .data

.section .text
.global count_even_matrix  # int count_even_matrix(int **m, int y, int k);

count_even_matrix:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# save callee registers
	pushl %esi
	pushl %ebx
	
# body of the function
	movl 8(%ebp),  %esi  	# moves matrix address to esi
	movl 12(%ebp), %eax  	# y - number of lines
	movl 16(%ebp), %ebx  	# k - number of columns
	
	imull %ebx				# multiplies number of lines with number of columns = number of elements
	
	movl %eax, %ecx			# moves number of elements to ecx (to loop)
	
	movl $0, %eax			# clears eax

matrix_loop:
	movl (%esi), %edx		# moves value in matrix to edx
	shrl $1, %edx			# shift least significative digit to the right (carry)
	jc increment			# if carry is active, the number is odd, jums to increment
	
	incl %eax				# increments eax if carry flash is zero (even number)
	
increment:
	addl $4, %esi			# adds 4 (int = 4 bytes) to esi
	loop matrix_loop		# loops while ecx > 0

# restore calle registers
	popl %ebx
	popl %esi

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

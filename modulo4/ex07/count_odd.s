/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * COUNT_ODD.S
 * 
 */

.section .data

.section .text
.global count_odd  # int count_odd(int* vec, int n)

count_odd:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl 8(%ebp), %esi		# moves address of the array to esi
	movl 12(%ebp), %ecx		# moves n to ecx (used to loop through array)
	movl $0, %eax			# clears eax
	
array_loop:
	movl (%esi), %ebx		# moves value pointed by esi to ebx
	sarl %ebx				# shifts 1 bit to the right (least significative bit sets carry flag)
	jnc next				# if CF = 0, number is even, so it jumps to next. If CF = 1, number is odd
	
	incl %eax				# increments eax (number in current position is odd)
	
next:
	addl $4, %esi		# increments esi by 4 (int = 4 bytes)
	loop array_loop		# loops while ecx > 0

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

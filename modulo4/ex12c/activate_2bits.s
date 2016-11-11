/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * activate_2bits.s
 * 
 */

.section .data

.section .text
.global activate_2bits  # void activate_2bits(int *ptr, int pos)

activate_2bits:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function

# body of the function
	
	# call activate_bit
	pushl 12(%ebp)		# Sets 2nd param with received 2nd param 
	pushl 8(%ebp)		# Sets 1st param with received 1st param
	call activate_bit	# calls activate_bit
	addl $8, %esp		# clears params
	
	movl $31, %eax		# moves value 31 (last index) to eax
	subl 12(%ebp), %eax	# subtracts 2nd param (pos) to eax (eax - pos)
	
	# call activate_bit 
	pushl %eax			# Sets 2nd param with eax
	pushl 8(%ebp)		# Sets 1st param with received 1st param
	call activate_bit	# calls activate_bit
	addl $8, %esp		# clears params

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

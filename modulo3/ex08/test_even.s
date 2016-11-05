/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * TEST_EVEN.S
 * 
 */

.section .data

.section .text

.global test_even		# int vec_sum_even(void)

test_even:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	movl $1, %eax			# moves 1 to eax
	
# saves registers
	pushl %ebx
	# pushl %esi				# used but not altered
	
# body of the function

	movl $1, %ebx			# moves value 1 to ebx (to use in testl instruction)
	testl (%esi), %ebx		# tests value pointed by esi and ebx (value 1). AND returns 1 if least significant bit of eax is 1.
							# (ex. 1101 0101 AND 0000 0001 = 0000 0001 or 1101 0100 AND 0000 0001 = 0000 0000)
	je end					# jumps to end if even
	movl $0, %eax			# moves 0 to eax

end:
# restore registers
	# popl %esi
	popl %ebx

# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

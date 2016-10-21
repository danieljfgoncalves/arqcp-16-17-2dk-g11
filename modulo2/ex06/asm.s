/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
.global num
.global a
.global b

.section .text
.global swapBytes    	# short swapBytes(void)
.global concatBytes    	# short concatBytes(void)


swapBytes:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movw num, %bx   	# place num in bx (16-bit register of ebx)
	movb %bh, %al   	# move bh (8-bit register of bx that represents the most significant bits) to
						# ah (8-bit register of ax that represents the least significant bits)
	movb %bl, %ah  		# move bl (8-bit register of bx that represents the least significant bits) to
						# ah (8-bit register of ax that represents the most significant bits)

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret
	
	
concatBytes:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movb a, %ah			# moves a to ah
	movb b, %al			# moves b to al
						# returns ax.

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

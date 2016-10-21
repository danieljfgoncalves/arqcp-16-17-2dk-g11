/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
.global a				# 8-bit variable
.global b				# 16-bit variable
.global c				# 32-bit variable
.global d				# 32-bit variable


.section .text
.global operation    	# int operation(void)
						# A + B - C + D

operation:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	
	# reset registers to 0
	movl $0, %eax		# sets eax to 0 value.
	movl $0, %edx		# sets edx to 0 value.
	
	movb a, %al			# moves a to al (8-bit)
	addw b, %ax			# adds b to ax (16-bit)
	sbbl c, %eax		# subtracts c (with carry) to eax (8-bit) (destination - (origin + CF))
	adcl d, %eax		# adds d to eax
	adcl $0, %edx		# adds 0 (and carry, if any) to edx.
						# Return value is in edx:eax

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

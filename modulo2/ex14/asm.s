/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data

.global num				# 32-bit integer

.section .text

.global magic_eight    	# int magic_eight

magic_eight:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function

	movl $0, %edx		# clears edx

	movl num, %eax		# moves num to eax
	subl $1, %eax		# subtracts 1 to eax
	movl $3, %ebx		# moves 3 to ebx
	imull %ebx			# multiplies ebx x eax (signed numbers)
	addl $12, %eax		# adds 12 to eax
	idivl %ebx			# divids eax / ebx
	addl $5, %eax		# adds 5 to eax
	subl num, %eax		#subtracts num to eax
						# Return in eax

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

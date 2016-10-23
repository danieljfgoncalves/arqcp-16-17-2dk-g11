/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * f4.s
 * 
 */

.section .data

.global i				# 32-bit unsigned integer
.global j				# 32-bit unsigned integer

.section .text

.global f4				# int f4(void)

f4:
# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function

	movl $0, %edx		# clears edx

	movl i, %eax		# moves i to eax
	movl j, %ebx		# moves j to ebx
	addl i, %ebx		# adds i to ebx
	cmpl $10, %ebx		# compares ebx to 10 (ebx - 10)
	jg greater			# if SF=0 jump to greater
	movl j, %eax		# moves j to eax
	movl $3, %ebx		# moves 3 to ebx
	idivl %ebx			# divides edx:eax by ebx. Result in eax.
	jmp end				# jump to end
	
greater:
	movl $2, %ebx		# moves 2 to ebx
	imull %ebx			# multiplies eax to ebx. Result in edx:eax
	
end:
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * f.s
 * 
 */

.section .data

.global i				# 32-bit unsigned integer
.global j				# 32-bit unsigned integer

.section .text

.global f				# int f(void)

f:
# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function

	movl i, %eax		# moves i to eax
	movl j, %ebx		# moves j to ebx
	cmpl %eax, %ebx		# compares ebx to eax (ebx - eax)
	je equal			# if ZF=1 jump to equal
	addl %ebx, %eax		# adds ebx to eax
	jmp end				# jumps to end
	
equal:
	subl %ebx, %eax		# subtracts ebx to eax (eax - ebx)
	
end:
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

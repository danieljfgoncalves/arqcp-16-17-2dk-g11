/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * asm.s
 * 
 */

.section .data

.global i				# 32-bit unsigned integer
.global j				# 32-bit unsigned integer

.section .text

.global f				# int f(void)
.global f2				# int f2(void)

f:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function

	movl i, %eax
	movl j, %ebx
	cmpl %eax, %ebx
	je equal
	addl %ebx, %eax
	jmp end
	
equal:
	subl %ebx, %eax
	
end:
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

#####

f2:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function

	movl i, %eax
	movl j, %ebx
	cmpl %eax, %ebx
	jge greater_equal
	addl $1, %ebx
	jmp end
	
equal:
	addl $1, %eax
	

	imull %ebx
end:
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

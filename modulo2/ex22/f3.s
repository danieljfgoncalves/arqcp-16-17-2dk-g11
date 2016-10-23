/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * f3.s
 * 
 */

.section .data

.global i				# 32-bit unsigned integer
.global j				# 32-bit unsigned integer

.section .text

.global f3				# int f3(void)

f3:
# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function

	movl $0, %edx		# clears edx

	movl i, %eax		# moves i to eax
	movl j, %ebx		# moves j to ebx
	cmpl %ebx, %eax		# compares eax to ebx (eax - ebx)
	jge greater_equal	# if ZF=1 & SF=0 jump to greater_equal
	movl %eax, %ecx		# moves eax to ecx
	imull %ebx			# multiplies ebx x eax. result in edx:eax (h)
	addl %ebx, %ecx		# adds ebx to ecx
	addl $2, %ecx		# adds 2 to ecx (g)
	jmp end				# jumps to end
	
greater_equal:
	movl %eax, %ecx		# moves eax to ecx
	addl %ebx, %eax		# adds ebx to eax (h)
	addl $1, %ecx		# adds 1 to ecx (g)
	
end:
	idivl %ecx			# divides edx:eax by ecx (h/g). Result in eax
	
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * f2.s
 * 
 */

.section .data

.global i				# 32-bit unsigned integer
.global j				# 32-bit unsigned integer

.section .text

.global f2				# int f2(void)

f2:
# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function

	movl i, %eax		# moves i to eax
	movl j, %ebx		# moves j to ebx
	cmpl %eax, %ebx		# compares ebx to eax (ebx - eax)
	jge greater_equal	# if ZF=1 & SF=0 jump to greater_equal
	addl $1, %ebx		# adds 1 to ebx (j)
	jmp end				# jump to end
	
greater_equal:
	addl $1, %eax		# adds 1 to eax (i)
	
end:
	imull %ebx			# multiplies ebx x eax. result in edx:eax
	
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

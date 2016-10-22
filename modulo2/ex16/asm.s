/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
n:
	.int 0
a:
	.int 0
b:
	.int 0
.global n				# 32-bit integer
.global a				# 32-bit integer
.global b				# 32-bit integer
.equ I, 1				# Constant value for i

.section .text
.global summation    	# int summation(void)
						# E(n,i=1) i*A/B
summation:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	
	movl n, %ecx		# moves n to ecx.
	movl $I, %ebx		# moves I constant to ebx
	movl $0, %esi		# initializes esi
	
	cmpl %ecx, %ebx		# compares ebx (i) to ecx (n) -> (n - i)
	jg end				# jump if i > n

sum_loop:
		
		# start loop body
		movl $0, %edx		# intializes edx
		movl a, %eax		# moves a to eax
		imull %ebx			# multiplies ebx x eax. Result is in edx:eax
		idivl b				# divides edx:eax by b. Result is in eax 
		addl %eax, %esi		# adds eax to esi
		# end loop body
		
		incl %ebx			# increments 1 to ebx
		cmpl %ecx, %ebx		# compares ebx (i) to ecx (n) -> (n - i)
		jle sum_loop		# jump if i <= n
		
	end:
	
	movl %esi, %eax			# moves esi to eax. Returns eax.
	
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

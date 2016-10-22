/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data

.global num				# 32-bit unsigned integer

.section .text

.global factorial		# unsigned long long factorial(void)

factorial:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function

	movl $0, %edx		# clear edx register
	movl $1, %eax		# set eax to value 1
	movl num, %ecx		# moves num to ecx (loop instruction decrements by 1 eax)
	cmpl $0, %ecx		# compares value 0 to ecx
	je end 				# if ecx is 0 it skip the loop and jumps to end
	
	factorial_loop:
	
	# checks if carry flag is active before it multiplies
	jc too_big			# jumps to too_big label (if carry flag active)
	
	#loop body
	mull %ecx			# multiplies ecx x eax. result is in edx:eax
	
	loop factorial_loop	# decrements ecx and jumps to factorial_loop if
						# ecx is different than 0
	jmp end				# jumps to the end
	
	too_big:
	mov $0, %edx		# sets edx to value 0
	mov $0, %eax		# sets edx to value 0
	
	end:
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
.global a
.global b

.section .text
.global isMultiple    	# char isMultiple(void)


isMultiple:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl $0, %edx		# clears edx
	movl a, %eax		# moves a to eax
	idivl b				# divides value in eax by value of b
	cmpl $0, %edx		# compares edx (remainder of div) to 0 (edx - 0)
						# if remainder is 0, edx is equal to ecx
	je jmp_is_equal		# jumps if equal
	movb $0, %al		# moves 0 (it is not a multiple) to eax (return value)
	jmp end
	
jmp_is_equal:
	movb $1, %al		# moves 1 (it is a multiple) to eax (return value)
	
end:

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

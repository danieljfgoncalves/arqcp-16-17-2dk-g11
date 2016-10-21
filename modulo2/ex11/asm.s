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
	movl $0, %ecx		# moves 0 to ecx
	cmpl %ecx, %edx		# compares edx (remainder of div) to ecx (0)
						# if remainder is 0, edx is equal to ecx
						# if remainder is > 0, edx is greater than ecx
	je jmp_is_equal		# jumps if equal
	jg jmp_is_greater	# jumps if greater
	
jmp_is_equal:
	movl $1, %eax		# moves 1 (it is a multiple) to eax (return value)
	jmp end
jmp_is_greater:
	movl $0, %eax		# moves 0 (it is not a multiple) to eax (return value)
	jmp end
end:

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

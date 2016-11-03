/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
.global ptr1
.equ SPACE, 32

.section .text
.global space_count  # int space_count(void)

space_count:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl ptr1, %esi		# moves ptr1 (pointer to str address) to esi

	movl $0, %eax		# clears eax
string_loop:	
	movb (%esi), %bl	# moves char pointed by esi to bl 
	cmpb $0, %bl		# compares bl with 0 (al - 0)
	je end				# jumps to end
	
	# body of the loop
	cmpb $SPACE, %bl	# compares al with SPACE (al - SPACE)
	jne increments 		# jumps to increments if cmpb is not equal
	
	incl %eax			# increments the number of spaces to eax
	
increments:
	incl %esi			# increments 1 to esi
	jmp string_loop		# jumps to string_loop
	
end:
	

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

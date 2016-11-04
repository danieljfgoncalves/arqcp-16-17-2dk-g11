/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data

.global ptr1				# char pointer to str (32-bit)

.equ SPACE, 32				# constant with ascii value for SPACE

.section .text

.global encrypt				# int encrypt(void)

encrypt:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# body of the function

	movl ptr1, %esi			# moves char pointer to esi (source)
	movl $0, %eax			# clears eax

loop:
	movb (%esi), %bl		# moves char value pointed by esi to bl
	cmpb $0, %bl			# compares bl to 0 (bl - 0)
	je end					# if bl is 0 jump to end (end of string or empty)
	cmpb $SPACE, %bl		# compares bl to SPACE (bl - SPACE)
	je next					# if bl value is a space jump to next
	incb %bl				# increments 1 if it is not 0 or SPACE
	movb %bl, (%esi)		# moves bl to value point by esi
	incl %eax				# increments 1 to number of changed values (return value)
	
next:
	incl %esi				# increments to next address
	jmp loop				# jumps to loop
	
end:
# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

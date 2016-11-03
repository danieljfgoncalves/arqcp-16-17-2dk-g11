/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
.global ptr1
.global ptr2

.equ LETTER_B, 98
.equ LETTER_V, 118 

.section .text
.global str_copy_p2  # void str_copy_p2(void)

str_copy_p2:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl ptr1, %esi			# moves ptr1 (pointer to str1 address) to esi
	movl ptr2, %edi			# moves ptr2 (pointer to str2 address) to edi
	
string_loop:	
	movb (%esi), %bl		# moves char pointed by esi to bl 
	cmpb $0, %bl			# compares bl with 0 (al - 0) to check for str end
	je end					# jumps to end
	
	# body of the loop
	cmpb $LETTER_B, %bl		# compares bl with LETTER_B (bl - LETTER_B)
	jne check_v 			# jumps to check_v if cmpb is not equal
	movb $LETTER_V, %bl		# if cmp is equal, moves LETTER_V to bl
	jmp copy_letter			# jumps to copy_letter
	
check_v:
	cmpb $LETTER_V, %bl		# compares bl with LETTER_V (bl - LETTER_V)
	jne copy_letter 		# jumps to copy_letter if cmpb is not equal
	movb $LETTER_B, %bl 	# if cmp is equal, moves LETTER_B to bl
	
copy_letter:
	movb %bl, (%edi)	# moves bl to char pointed by edi

	incl %esi			# increments 1 to esi
	incl %edi			# increments 1 to edi
	jmp string_loop		# jumps to string_loop
	
end:
	
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

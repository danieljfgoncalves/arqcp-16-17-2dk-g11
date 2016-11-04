/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data

.global ptr1				# char pointer to str1 (32-bit).
.global ptr2				# char pointer to str2 (32-bit).

.equ LETTER_B, 98			# char b (lowercase) ascii value.
.equ LETTER_V, 118			# char v (lowercase) ascii value.

.section .text

.global str_copy_p			# void str_copy_p(void)

str_copy_p:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# body of the function

	movl ptr1, %esi					# moves prt1 to esi (source)
	movl ptr2, %edi					# moves ptr2 to edi (destination)
	
loop_string:

	# Verifies if string is empty
	movb (%esi), %bl				# moves next pointed value by esi to bl
	cmpb $0, %bl					# compares bl to 0 (bl - 0)
	je end

	# body of loop
	cmpb $LETTER_B, %bl				# compares bl to LETTER_B (bl - LETTER_B)
	jne copy_to						# jumps to copy_to if bl is not letter b (lowercase)
	movb $LETTER_V, %bl				# if bl is letter b (lowercase), moves letter v to bl
	
	
copy_to:
	movb %bl, (%edi)				# moves bl to value pointed by edi
	incl %esi						# increments esi 
	incl %edi						# increments edi
	jmp loop_string					# if end of string (0) not reached loop
	
end:
# epilogue
	movl %ebp, %esp  				# restore the previous stack pointer ("clear" the stack)
	popl %ebp     					# restore the previous stack frame pointer
	ret

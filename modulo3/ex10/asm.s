/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data

.global ptr1				# char pointer to str1 (32-bit)
.global ptr2				# char pointer to str2 (32-bit)
.global ptr3				# char pointer to str3 (32-bit)

.section .text

.global str_cat				# void str_cat(void)

str_cat:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# body of the function

	movl ptr1, %esi					# moves ptr1 to esi (source)
	movl ptr3, %edi					# moves ptr3 to edi (destination)
	
loop_str1:

	# Verifies if string is empty
	movb (%esi), %bl				# moves next pointed value by esi to bl
	cmpb $0, %bl					# compares bl to 0 (bl - 0)
	je string2						# if empty jump to end

	# body of loop
	movb %bl, (%edi)				# moves bl to value pointed by edi
	incl %esi						# increments esi 
	incl %edi						# increments edi
	jmp loop_str1					# if end of string (0) not reached loop
	
string2:
	movl ptr2, %esi					# moves ptr1 to esi (source)

loop_str2:

	# Verifies if string is empty
	movb (%esi), %bl				# moves next pointed value by esi to bl
	cmpb $0, %bl					# compares bl to 0 (bl - 0)
	je end

	# body of loop
	movb %bl, (%edi)				# moves bl to value pointed by edi
	incl %esi						# increments esi 
	incl %edi						# increments edi
	jmp loop_str2					# if end of string (0) not reached loop
	
end:
# epilogue
	movl %ebp, %esp  				# restore the previous stack pointer ("clear" the stack)
	popl %ebp     					# restore the previous stack frame pointer
	ret

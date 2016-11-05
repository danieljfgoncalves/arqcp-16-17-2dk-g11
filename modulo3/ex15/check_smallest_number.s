/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * CHECK_SMALLEST_NUMBER.S
 * 
 */

.section .data
.global ptrvec
.global num

.section .text
.global check_smallest_number  # void check_smallest_number(void)

check_smallest_number:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# saves registers to be used
	pushl %esi
	pushl %ebx
	
# body of the function
	decl %ecx			# subtracts one position to ecx (loop stop condition)

	movl %esi, %edi		# moves pointer address stored in esi to edi
	addl $4, %edi		# increments edi by 4 (int = 4 bytes)
	movl (%esi), %ebx	# moves value pointed by esi to ebx

for_loop:	
	cmpl $0, %ecx		# compares ecx with 0 (loop stop condition)
	je end				# cmp is equal to 0, loop ends
	
	cmpl %ebx, (%edi)	# compares value pointed by edi with ebx (edi - ebx)
	jge	increment		# if cmp result is equal or greater, jumps to increment
	
	movl (%edi), %eax	# moves value pointed by edi to eax
	movl %ebx, (%edi)	# moves value in ebx to address pointed by edi
	movl %eax, (%esi)	# moves value in eax to address pointed by esi
	
	movl (%esi), %ebx	# moves value pointed by esi to ebx
	
increment:
	addl $4, %edi		# increments edi by 4 (int = 4 bytes)
	decl %ecx			# subtracts 1 to edx (loop stop condition)
	jmp for_loop		# jumps to for_loop

end:

# restore registers
	popl %ebx
	popl %esi
	
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

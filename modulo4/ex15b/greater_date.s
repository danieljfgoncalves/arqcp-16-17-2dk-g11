/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * GREATER_DATE.S
 * 
 */

.section .data

.section .text
.global greater_date  # int greater_date(int date1, int date2)

greater_date:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# save callee registers
	pushl %ebx
	
# body of the function
	movl 8(%ebp), %eax		# moves date1 to eax
	movl 12(%ebp), %ebx		# moves date2 to ebx
	
	movl $16, %ecx			# moves 16(number of bits needed to left shift in order to isolate year) to ecx
	shll %cl, %eax			# shifts cl bits to the left, result in eax
	shll %cl, %ebx			# shifts cl bits to the left, result in ebx	
	cmpl %ebx, %eax			# compares eax with ebx (eax - ebx)
	jl date2_greater		# if date1 < date2, jump date2_greater
	jg date1_greater		# if date1 > date2, jump date1_greater
	
	movl $24, %ecx			# moves 24(number of bits needed to right shift in order to isolate month) to ecx
	movl 8(%ebp), %eax		# moves date1 to eax
	movl 12(%ebp), %ebx		# moves date2 to ebx
	shrl %cl, %eax			# shifts cl bits to the right, result in eax	
	shrl %cl, %ebx			# shifts cl bits to the right, result in ebx
	cmpl %ebx, %eax			# compares eax with ebx (eax - ebx)
	jl date2_greater		# if date1 < date2, jump date2_greater
	jg date1_greater		# if date1 > date2, jump date1_greater
	
	movl $8, %ecx			# moves 24(number of bits needed to left shift in order to isolate day) to ecx
	movl 8(%ebp), %eax		# moves date1 to eax
	movl 12(%ebp), %ebx		# moves date2 to ebx
	shll %cl, %eax			# shifts cl bits to the left, result in eax	
	shll %cl, %ebx			# shifts cl bits to the left, result in ebx
	cmpl %ebx, %eax			# compares eax with ebx (eax - ebx)
	jl date2_greater		# if date1 < date2, jump date2_greater
	
date1_greater:
	movl 8(%ebp), %eax		# moves date1 to eax
	jmp end

date2_greater:
	movl 12(%ebp), %eax		# moves date2 to eax
	
end:
	
# restore calle registers
	popl %ebx

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

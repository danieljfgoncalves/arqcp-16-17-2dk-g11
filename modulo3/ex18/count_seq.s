/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * COUNT_SEQ.S
 * 
 */

.section .data

.global ptrvec				# pointer to array to be checked (32-bit)
.global num					# array length (32-bit)
.global a					# integer variable (32-bit)
.global b					# integer variable (32-bit)
.global c					# integer variable (32-bit)


.section .text

.global count_seq			# int count_seq(void)

count_seq:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# body of the function
	
	movl $0, %eax			# counter (return value)
	movl $2, %ebx			# starting index 
	movl num, %ecx			# moves num to ecx (counter)
	
	cmpl %ebx, %ecx			# compares ecx to ebx (ecx - ebx)
	jle end					# if less than 3 elements no possible sequence
							# jumps to end
	movl ptrvec, %esi		# moves ptrvec to esi (source)
	addl $8, %esi			# go to index 2 (base index)
	
loop:
	movl (%esi), %edx		# moves value pointed by esi to edx
	movl %edx, c			# moves edx to c
	movl -4(%esi), %edx		# moves value pointed by previous index of esi to edx
	movl %edx, b			# moves edx to c
	movl -8(%esi), %edx		# moves value pointed by two previous index of esi to edx
	movl %edx, a			# moves edx to c
	
	# call is_seq
	pushl %eax
	pushl %ecx
	call is_seq
	cmpl $0, %eax			# compares return to see if 0 or 1
	popl %ecx
	popl %eax
	
	je skip					# if 0 (false) jump to skip
	incl %eax				# increments by 1 eax
	
skip:	
	incl %ebx				# increments ebx by 1
	cmpl %ebx, %ecx			# compares ecx to ebx (ecx - ebx)
	jle end					# if equal or less end loop
	
	addl $4, %esi			# next address
	jmp loop				# jump to loop
	 

end:
# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

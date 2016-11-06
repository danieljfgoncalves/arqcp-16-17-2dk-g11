/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * SORT_WITHOUT_REPS.S
 * 
 */

.section .data

.global ptrsrc				# int pointer to vec1 (32-bit)
.global ptrdest				# int pointer to vec2 (32-bit)
.global ptraux				# int pointer to array (32-bit)
.global x					# integer variable (32-bit)
.global num					# integer variable (32-bit)

.section .text

.global sort_without_reps	# int sort_without_reps(void)

sort_without_reps:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# body of the function
	movl ptrsrc, %esi		# moves pointer ptrsrc to esi (source)
	movl num, %ecx			# moves num to ecx (loop counter)	
	cmpl $0, %ecx			# compares if ecx is 0
	je end					# jumps to end if counter is already 0
	
	movl ptrdest, %edi		# moves pointer ptrdest to edi (destination)
	
	movl $0, %eax			# clears eax
	
loop:
	movl (%esi), %ebx		# moves value pointed by esi to ebx
	movl %ebx, x			# moves ebx to x variable
	movl %eax, num			# moves eax to num
	movl %edi, ptraux		# moves edi to prtaux
	
	cmpl $0, %eax			# compares if eax is 0
	je to_sort				# jumps to skip if eax is 0
	
	pushl %eax				# saves eax before call
	pushl %ecx				# saves ecx before call
	call exists				# calls exists
	testl $1, %eax			# tests return (eax) if 0 or 1
	popl %ecx				# restores ecx after call
	popl %eax				# restores eax after call

	jne skip				# jumps to skip if eax is 1

to_sort:
	# pushl %eax - don't push because new value is correct one
	pushl %ecx				# saves ecx
	call sort				# calls sort
	popl %ecx				# restoes ecx
	# popl %eax - don't pop because new value is correct one
	
skip:
	addl $4, %esi			# next address of vec1
	loop loop				# loops until ecx is 0
	
end:
# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * SORT.S
 * 
 */

.section .data

.global ptraux				# pointer to array to insert (32-bit)
.global x					# integer with value to be inserted (16-bit)
.global num					# integer variable (32-bit)

.section .text

.global sort				# int sort(void)

sort:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# save registers to be used
	pushl %ebx
	pushl %esi
	pushl %edi
	
# body of the function
	movl x, %ebx			# moves x to ebx
	movl ptraux, %edi		# moves int pointer to edi (destination)
	movl num, %ecx			# moves num to ecx (loop counter)
	movl %ecx, %eax			# moves ecx to eax
	incl %eax				# increments eax by 1 (return value is arrays size + 1)
	
	cmpl $0, %ecx			# compares if ecx is 0
	je end					# jumps to end if 0
	
loop:
	cmpl %ebx, (%edi)		# compares edi to ebx (edi - ebx)
	jg shift_insert			# jumps to shift_insert if pointed value by edi > ebx
	addl $4, %edi			# next address
	loop loop				# jumps to loop if ecx is not 0
	jmp end					# jumps to end
	
shift_insert:
	movl %edi, ptraux		# moves edi to ptraux
	movl %ecx, num			# moves ecx to num
	
	pushl %eax				# saves eax
	call shift_array		# calls shift_array
	popl %eax				# restores eax

end:
	movl %ebx, (%edi)		# moves ebx to value pointed by edi

# restore registers
	popl %edi
	popl %esi
	popl %ebx

# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

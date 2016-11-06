/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * SHIFT_ARRAY.S
 * 
 */

.section .data

.global ptraux				# int pointer to array to shift (32-bit)
.global num					# integer variable (32-bit)

.section .text

.global shift_array			# void shift_array(void)

shift_array:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# save registers to be used
	pushl %ebx
	pushl %edi
	
# body of the function
	movl ptraux, %edi		# moves pointer to edi (destination)
	movl num, %ecx			# moves num to ecx (loop counter)
	
	movl (%edi), %ebx		# moves pointed value by edi to ebx
	
loop:
	add $4, %edi			# next address
	movl (%edi), %edx		# moves pointed value by edi to edx
	movl %ebx, (%edi)		# moves ebx to value pointed by edi
	movl %edx, %ebx			# moves edx to ebx
	
	loop loop				# jumps to loop if ecx is not 0

# restore registers
	popl %edi
	popl %ebx

# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

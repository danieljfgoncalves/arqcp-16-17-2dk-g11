/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * EXISTS.S
 * 
 */

.section .data

.global ptraux				# int pointer to array to check (32-bit)
.global x					# integer with value to be checked (32-bit)
.global num					# integer variable (32-bit)

.section .text

.global exists				# int exists(void)

exists:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# save registers to be used
	pushl %ebx
	pushl %esi
	
# body of the function
	movl x, %ebx			# moves x to ebx
	movl ptraux, %esi		# moves pointer to esi
	movl num, %ecx			# moves num to ecx (loop counter)
	movl $1, %eax			# sets eax to 1
	
loop:
	cmpl (%esi), %ebx		# compares ebx to pointed value of esi (ebx - (esi))
	je end					# if equal jump to end
	addl $4, %esi			# next address of array
	loop loop				# jumps to loop if ecx is not 0
	
	decl %eax				# sets eax to 0
	
							# Returns 1 if array contains x, or 1 otherwise
end:

# restore registers
	popl %esi
	popl %ebx

# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

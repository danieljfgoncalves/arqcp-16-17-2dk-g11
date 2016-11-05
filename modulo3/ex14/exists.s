/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * EXISTS.S
 * 
 */

.section .data

.global ptraux				# short pointer to value to check (32-bit)
.global ptrvec2				# short pointer to vec (32-bit)
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
	movw (ptraux), %bx		# moves pointed value to bx
	movl ptrvec2, %esi		# moves short pointer to esi
	movl num, %ecx			# moves num to ecx (loop counter)
	movl $1, %eax			# sets eax to 1
	
loop:
	cmpw (%esi), %bx		# compares bx to pointed value of esi (bx - (esi))
	je end					# if equal jump to end
	addl $2, %esi			# next address of short array
	loop loop				# jumps to loop if ecx is not 0
	
	decl %eax				# sets eax to 0
	
							# Returns 1 if array contains value pointed 
							# by ptraux, or 1 otherwise
end:

# restore registers
	popl %esi
	popl %ebx

# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

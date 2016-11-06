/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * IS_SEQ.S
 * 
 */

.section .data

.global a					# integer variable (32-bit)
.global b					# integer variable (32-bit)
.global c					# integer variable (32-bit)

.section .text

.global is_seq				# int is_seq(void)
							# check if (a < b < c)
is_seq:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# save registers to be used
	pushl %ebx
	
# body of the function
	movl $0, %eax			# clears eax

	movl b, %ebx			# moves b to ebx
	cmpl c, %ebx			# compares ebx to c (ebx - c)
	jge end					# if b (ebx) >= c jump to end
	
	cmpl a, %ebx			# compares ebx to a (ebx - a)
	jle end					# if b (ebx) <= a jump to end
	
	incl %eax				# increments by 1
							
							# eax = 1 is a sequence, 0 otherwise

end:	
# restore registers
	popl %ebx
	
# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * count_bits_zero.s
 * 
 */

.section .data

.section .text
.global count_bits_zero    	# int count_bits_zero(int x)

count_bits_zero:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# save callee registers
	pushl %ebx
	
# body of the function
	
	movl $0, %eax		# clears eax
	
	movl 8(%ebp), %ebx	# moves 1st param to ebx

while:	
	cmpl $0, %ebx		# compares 0 to ebx (ebx - 0)
	je end				# if 0 jump to end
	
	shr %ebx			# shifts ebx by 1 to the right (ebx >> 1) (no need to preserve sign)
	jc skip				# if CF=1 go to skip
	incl %eax			# increments by 1
	
skip:
	jmp while			# jumps to while
	
end:
# restore callee registers
	popl %ebx

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

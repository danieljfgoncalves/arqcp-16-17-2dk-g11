/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * join_bits.s
 * 
 */

.section .data

.section .text
.global join_bits    	# int join_bits(int a, int b, int pos)

join_bits:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function

# reserve space for local variable
	subl $4, %esp

# body of the function
	
	movl $0, %eax			# clears eax
	NOTl %eax				# inverts eax
	
	movl 16(%ebp), %ecx		# movs 3rd param (pos) to ecx
	incl %ecx				# increments eax (pos) by 1
	SALl %cl, %eax			# shifts eax by pos+1 times
	
	movl %eax, -4(%ebp)		# saves eax (mask) to local variable
	
	ANDl 12(%ebp), %eax		# AND 2nd param (b) with eax (mask)
	
	movl -4(%ebp), %edx		# moves (mask) to edx
	NOTl %edx
	
	ANDl 8(%ebp), %edx		# AND 1st param (a) with edx (~mask)
	
	ORl %edx, %eax			# OR edx with eax (return value)

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

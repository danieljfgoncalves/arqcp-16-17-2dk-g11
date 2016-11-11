/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * activate_bit.s
 * 
 */

.section .data

.section .text
.global activate_bit    	# int activate_bit(int *ptr, int pos)

activate_bit:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# save callee registers
	pushl %ebx

# reserve space for local variables
	subl $4, %esp		# reserves 4 bytes for a local variable

# body of the function
	
	movl $0, %eax			# clears eax
	
	movl 8(%ebp), %ecx		# moves 1st param to ecx (ptr)
	movl (%ecx), %ebx		# moves pointed value by ecx to ebx
	movl %ecx, -4(%ebp)		# moves ecx (ptr) to lcl variable
	
	movl $1, %edx			# moves 1 to edx (aux variable)
	movl 12(%ebp), %ecx		# moves 2nd param (pos) to ecx (MAX value 31, fits in %cl)
	sall %cl, %edx			# shifts left cl number of times (edx *= 2^cl)
	
	ORl %edx, %ebx			# edx OR ebx (ex. 1000 OR 0001 = 1001)
	
	movl -4(%ebp), %ecx		# moves lcl variable to ecx
	cmpl %ebx, (%ecx)		# compares ebx (result) to value pointed by ecx (initial value)
	je not_altered			# if they are equal jump to not_altered 
	
	incl %eax				# increments eax by 1
	movl %ebx, (%ecx)		# moves ebx (result) to value pointed by ecx 
	
	
not_altered:
# restore callee registers
	popl %ebx

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ACTIVATE_BITS.S
 * 
 */

.section .data

.section .text
.global activate_bits  # int activate_bits(int a, int left, int right)

activate_bits:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# save callee registers
	pushl %ebx
	
# body of the function
	movl 8(%ebp), %eax		# moves a to eax
	
	movl $31, %ecx			# moves 31 to ecx
	subl 12(%ebp), %ecx		# subtracts left to ecx
	movl $0xffffffff, %ebx	# moves -1 to ebx
	shrl %cl, %ebx			# shifts right cl number of times, result in ebx
	
	movl 16(%ebp), %ecx		# moves right to ecx
	movl $0xffffffff, %edx	# moves -1 to edx
	shll %cl, %edx			# shifts left cl number of times, result in edx
	
	XORl %edx, %ebx			# edx XOR ebx (ex. 1100 XOR 1010 = 0110)
	ORl %ebx, %eax			# ebx OR eax (ex. 1100 OR 1010 = 1110)
							# result in eax
	
# restore calle registers
	popl %ebx

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

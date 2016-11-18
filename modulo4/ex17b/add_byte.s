/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ADD_BYTE.S
 * 
 */

.section .data

.section .text
.global add_byte  # void add_byte(int x, int *vec1, int *vec2)

add_byte:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# save callee registers
	pushl %esi
	pushl %edi
	pushl %ebx
	
# body of the function
	movl 8(%ebp), %eax		# moves x to eax
	movl 12(%ebp), %esi		# moves address of vec1 to esi
	movl 16(%ebp), %edi		# moves address of vec2 to edi
	movl (%esi), %ecx		# moves first element of vec1 to ecx (first element = number of integers in vec1, excluding itself)
	addl $4, %esi			
	
for_loop:
	movl (%esi), %ebx			# moves value in esi to ebx
	addb %al, %bl				# adds x to first byte of ebx (bl)
	movl %ebx, (%edi)			# moves ebx (sum of x with first byte of value in esi) to edi (vec2)
	
	addl $4, %esi				# increments esi by 4 (int = 4 bytes)
	addl $4, %edi				# increments edi by 4 (int = 4 bytes)
	loop for_loop
	
# restore calle registers
	popl %ebx
	popl %edi
	popl %esi

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

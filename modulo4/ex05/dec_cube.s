/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * DEC_CUBE.S
 * 
 */

.section .data

.section .text
.global dec_cube  # int dec_cube(int* v1, int v2)

dec_cube:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# save callee registers
	pushl %esi
	pushl %ebx
	
# body of the function
	movl 8(%ebp), %esi		# moves address of v1 to esi
	movl 12(%ebp), %eax		# moves v2 to eax
	decl (%esi)				# decrements 1 in the value pointed by esi
	movl %eax, %ebx			# moves eax(v2) to ebx
	imull %eax				# multiplies eax by eax (result in eax)
	imull %ebx				# multiplies ebx by eax (result in eax)
	
# restore calle registers
	popl %ebx
	popl %esi

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

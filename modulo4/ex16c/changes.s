/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * changes.c
 * 
 */
.section .data
.equ MASK1, 0x00000800	# constant to verify if 4 least significative bits 
						# of the second byte of an integer is greater than 7
.equ MASK2, 0x00000f00	# constant (00000000 00000000 00001111 00000000)	


.section .text
.global changes    		# void changes(int *ptr)

changes:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function

# saves calle registers
	pushl %esi

# body of the function
	
	movl 8(%ebp), %esi	# moves param to esi (source)
	movl (%esi), %eax	# moves value pointed by esi to eax
	testl $MASK1, %eax	# tests(AND) eax with MASK1 (4 least significative bits of 2nd byte > 7)
	je end				# if test equal 0 jump to end (< 7)
	
	XORl $MASK2, %eax	# XOR eax with MASK2 (invert selected bits)
	movl %eax, (%esi)	# moves eax to value pointed by esi
	
end:	
# restores callee registers
	popl %esi
	
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret


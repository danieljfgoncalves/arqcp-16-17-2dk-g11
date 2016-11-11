/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * vec_count_bits_zero.s
 * 
 */

.section .data

.section .text
.global vec_count_bits_zero    	# int vec_count_bits_zero(int *ptr, int num)

vec_count_bits_zero:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	
	movl 12(%ebp), %ecx		# moves 2nd param to ecx (loop counter)
	movl 8(%ebp), %esi		# moves 1st param to esi (source)
	
	movl $0, %ebx			# clears ebx
	
for:
	pushl (%esi)			# pushs 1st param
	call count_bits_zero	# calls count_bits_zero
	addl $4, %esp			# clears params from stack
	addl %eax, %ebx			# adds eax (return from call) to ebx
	
	addl $4, %esi			# next address
	loop for				# loops to for lbl & decrements ecx, until ecx is 0
	
end:
	movl %ebx, %eax			# moves ebx to eax (return value)
	
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

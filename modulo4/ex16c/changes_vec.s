/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * changes_vec.s
 * 
 */
.section .data

.section .text
.global changes_vec    		# void changes_vec(int *ptrvec, int num)

changes_vec:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function

# saves callee registers
	pushl %esi

# body of the function
	
	movl 8(%ebp), %esi		# moves 1st param to esi   
	movl 12(%ebp), %ecx		# moves 2nd param to ecx (size of vec)

for:
	push %ecx				# saves caller ecx register
	
	push %esi				# Sets esi as param
	call changes			# calls changes
	addl $4, %esp			# clears param
	
	popl %ecx				# restores caller ecx register

	addl $4, %esi			# next address
	loop for				# loops until ecx 0
	
end:	
# restores callee registers
	popl %esi
	
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret


/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * SUB_GREATER.S
 * 
 */

.section .data

.section .text
.global sub_greater    	# int sub_greater(int num1, int num2, int *smaller)

sub_greater:
# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function

# save callee registers
	pushl %esi
	pushl %ebx
	
# body of the function
	
	movl 8(%ebp), %eax		# moves 1st param (num1) to eax
	subl 12(%ebp), %eax		# subracts 2nd param (num2) to num1 (num1-num2)
	
	movl 16(%ebp), %esi		# moves 3rd param (*smaller) to esi (source)
	
	js num2_bigger			# jumps if SF=1, meaning that num1 < num2
	
	movl 12(%ebp), %ebx		# moves 2nd param (num2) to ebx 
	movl %ebx, (%esi)		# moves ebx to value pointed by esi
	jmp end					# jumps to end
	
num2_bigger:
	movl 8(%ebp), %ebx		# moves 1st param (num1) to ebx
	movl %ebx, (%esi)		# moves ebx to value pointed by esi
	
end:
# restore calle registers
	popl %ebx
	popl %esi

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

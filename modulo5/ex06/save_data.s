/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * save_grades.s
 * 
 */

.section .data	
	# Alignment K = 4
	.equ I_OFFSET, 0		# s1's (int) i is at the beginning of the structure (last byte 3)
	.equ C_OFFSET, 4		# s1's (char) c starts at byte 4 (last byte 7, 3 empty spaces)
	.equ J_OFFSET, 8		# s1's (int) j starts at byte 8 (last byte 11)
	.equ D_OFFSET, 12		# s1's (char) d is at the last byte 12

.section .text
.global save_data    		# void save_data(s1 *s, int vi, char vc, int vj, char vd);

save_data:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function

# saves calle registers
	pushl %ebx
	pushl %edi

# body of the function
	movl 8(%ebp), %edi 			# move pointer of s1 (1st param) to edi (destination)
	
	movl 12(%ebp), %ebx			# moves 2nd param to ebx
	movl %ebx, I_OFFSET(%edi)	# moves ebx to edi (with the required offset of the struct)
	
	movb 16(%ebp), %bl			# moves 3rd param to ebx
	movb %bl, C_OFFSET(%edi)	# moves ebx to edi (with the required offset of the struct)
	
	movl 20(%ebp), %ebx			# moves 4th param to ebx
	movl %ebx, J_OFFSET(%edi)	# moves ebx to edi (with the required offset of the struct)
	
	movb 24(%ebp), %bl			# moves 5th param to ebx
	movb %bl, D_OFFSET(%edi)	# moves ebx to edi (with the required offset of the struct)
	
# restores callee registers
	popl %edi
	popl %ebx
	
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

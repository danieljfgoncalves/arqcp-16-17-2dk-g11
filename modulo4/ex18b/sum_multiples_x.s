/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * sum_multiples_x.s
 * 
 */
.section .data

.section .text
.global sum_multiples_x 	# int sum_multiples_x(char *vec, int x)

sum_multiples_x:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function

# saves calle registers
	pushl %esi
	pushl %ebx

# body of the function
	
	movl $0, %ecx			# initiates sum in ecx
	
	movl 12(%ebp), %ebx		# moves 2nd param (x) to ebx
	movl 8(%ebp), %esi		# moves 1st param (vec) to esi (source)
	
loop:
	cmpb $0, (%esi)			# compares value pointed by esi to 0
	je end					# if 0 jumps to end
	
	movl $0, %eax			# clears eax
	movb (%esi), %al		# moves value pointed by esi to al
	idivb %bh				# divides ax by bh
	
	cmpb $0, %ah			# compares if remainder is 0
	jne skip				# jumps to skip if remainder != 0
	
	addb (%esi), %cl		# adds value pointed by esi to cl
	
skip:
	incl %esi				# next address
	jmp loop				# jumps to loop
	
end:	
	movl %ecx, %eax			# moves ecx (sum) to eax (return value)

# restores callee registers
	popl %ebx
	popl %esi
	
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret


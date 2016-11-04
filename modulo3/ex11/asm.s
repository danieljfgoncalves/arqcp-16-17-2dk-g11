/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
.global ptrvec
.global num
.equ CONSTANT, 10

.section .text
.global vec_greater10  # int vec_greater10(void)

vec_greater10:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl $0, %eax		# clears eax
	movl ptrvec, %esi	# moves ptrvec (pointer to vec address) to esi 
	movl num, %ecx		# moves num to ecx (used in loop)
	
vec_loop:
	movl (%esi), %ebx		# moves value pointed by esi to ebx
	cmpl $CONSTANT, %ebx	# compares value in ebx with constant (ebx - CONSTANT)
	jl increment			# if value in ebx is less than constant, jump to increment loop
	
	addl $1, %eax		# if value in ebx is equal or greater than CONSTANT, eax is incremented by 1
	
increment:
	addl $4, %esi		# increment esi by 4 (long = 4 bytes)
	loop vec_loop		# jumps to loop while ecx is higher than 0

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

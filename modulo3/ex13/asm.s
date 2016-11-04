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


.section .text
.global vec_fill  # void vec_fill(void)

vec_fill:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl $0, %eax		# clears eax
	movl ptrvec, %esi	# moves ptrvec (pointer to vec address) to esi 
	movl num, %ecx		# moves num to ecx (used in loop)
	
	movl $0, %edx		# moves 0 to edx (stores index of the array)
vec_loop:
	movl (%esi), %ebx	# moves value pointed by esi to ebx
	cmpl $0, %ebx		# compares value in ebx with constant (ebx - 0)
	jge increment		# if value in ebx is less than 0, jump to increment loop
	
	movl %edx, (%esi)	# moves index of array to value pointed by esi
	
increment:
	addl $4, %esi		# increment esi by 4 (long = 4 bytes)
	addl $1, %edx		# increments index of the array
	loop vec_loop		# jumps to loop while ecx is higher than 0

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

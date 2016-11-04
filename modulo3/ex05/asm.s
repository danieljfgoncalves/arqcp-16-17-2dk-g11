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
.global vec_inc  # void vec_inc(void)

vec_inc:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl ptrvec, %esi	# moves ptrvec (to numbers vec address) to esi 
	movl num, %ecx		# moves num (size of the numbers array) to ecx (loop use)
	
increment_loop:
	addl $1, (%esi)			# adds 1 to the value pointed by esi
	addl $4, %esi			# increments 4 to esi (int = 4 bytes), so it points to the next value in the array
	loop increment_loop		# loops until value in ecx is 0

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

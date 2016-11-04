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
.global x

.section .text
.global vec_search  # short* vec_search(void)

vec_search:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl $0, %eax		# clears eax
	movl ptrvec, %esi	# moves ptrvec (pointer to vec address) to esi 
	movl num, %ecx		# moves num to ecx (used in loop)
	
vec_loop:
	movw (%esi), %bx	# moves value pointed by esi to bx
	cmpw x, %bx			# compares bx with x (bx - x)
	jne increment		# if cmpw is not equal, jumps to increment
	
	movl %esi, %eax		# moves adress in esi to ax (return value in ax)
	jmp end				# jumps to end of function	

increment:
	addl $2, %esi		# increments esi by 2 (short = 2 bytes)
	loop vec_loop		# if ecx is not 0, jumps to vec_loop
	movl $0, %eax		# moves 0 to ax if x is not found (return value in eax)

end:

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

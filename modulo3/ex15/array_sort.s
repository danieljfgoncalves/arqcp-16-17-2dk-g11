/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ARRAY_SORT.S
 * 
 */

.section .data
.global ptrvec
.global num

.section .text
.global array_sort  # void array_sort(void)

array_sort:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl ptrvec, %esi	# moves ptrvec (pointer to vec address) to esi 
	movl num, %ecx		# moves num to ecx (used in loop)
	
vec_loop:
	
	pushl %ecx						# saves ecx before call

	call check_smallest_number
	
	popl %ecx						# restores ecx after call
	
increment:
	addl $4, %esi		# increment esi by 4 (long = 4 bytes)
	loop vec_loop		# jumps to loop while ecx is higher than 0

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * VEC_SUM_EVEN.S
 * 
 */

.section .data

.global ptrvec				# integer pointer to vec (32-bit).
.global num					# integer variable (32-bit).

.section .text

.global vec_sum_even		# int vec_sum_even(void)

vec_sum_even:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# body of the function

	movl $0, %eax			# clears eax
	movl ptrvec, %esi		# moves ptr1 to esi (source)
	movl num, %ecx			# moves num to ecx (count register for loop instruction)
	
	cmpl $0, %ecx			# compares ecx to 0 (ecx - 0), vec is empty
	je end					# jumps to end
	
sum_loop:
	
	pushl %eax				# saves in stack before call
	pushl %ecx				# saves in stack before call
	call test_even			# calls test_even
	cmpl $1, %eax			# compares if return (eax) is 1 (even)
	popl %ecx				# restores from stack ecx
	popl %eax				# restores from stack eax

	jne skip		 		# jne jumps to skip if odd

	addl (%esi), %eax		# adds value pointed by esi to eax (even)

skip:
	addl $4, %esi			# increments esi by 4 bytes (next int)
	loop sum_loop			# loops and decrements ecx by 1, until ecx is 0
	
end:
# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

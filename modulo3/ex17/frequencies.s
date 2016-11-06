/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * FREQUENCIES.S
 * 
 */

.section .data
.global ptrgrades
.global ptrfreq
.global num


.section .text
.global frequencies  # void frequencies(void)

frequencies:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl ptrgrades, %esi	# moves ptrgrades (pointer to grades address) to esi
	movl num, %ecx			# moves num to ecx (used in loop)
	movl ptrfreq, %edi		# moves ptrfreq (pointer to freq address) to edi
	
grades_loop:
	movl (%esi), %eax
	imull $4, %eax			# multiplies value in eax (grade) by 4 (int = 4 bytes) giving the amount of bytes needed to reach the grade position in freq array
	addl %eax, %edi			# adds eax to edi
	incl (%edi)				# increments the value pointed by edi
	movl ptrfreq, %edi		# restores edi with the address of the ptrfreq (first position of freq)
	addl $4, %esi			# increments esi by 4 (int = 4 bytes) (next grade)
	loop grades_loop		# jumps to loop while ecx is higher than 0

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

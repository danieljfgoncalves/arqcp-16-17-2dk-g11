/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * FIND_GREATER.S
 * 
 */

.section .data

.section .text
.global find_greater  # int find_greater(Student *s, int minimum, int *greater_grades)

find_greater:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# save callee registers
	pushl %esi
	pushl %edi
	pushl %ebx
	
# body of the function
	movl 8(%ebp), %esi		# moves Student structure address to esi
	addl $8, %esi			# adds 8 to esi (points to student grades)
	movl 12(%ebp), %ebx		# moves minimum to ebx
	movl 16(%ebp), %edi		# moves greater_grades address to edi
	
	movl $0, %eax			# clears eax
	
	movl $10, %ecx			# moves 10 to ecx (loop through grades)

grades_loop:				
	cmpl %ebx, (%esi)		# compares grade in student grades with minimum
	jle next_grade			# jumps to next_grade if grade is less or equal than minimum
	
	movl (%esi), %edx		# moves grade to edx (temp storage)
	movl %edx, (%edi)		# moves value in edx to edi
	addl $4, %edi			# increments edi by 4
	incl %eax				# increments eax (number of grades = return value)

next_grade:
	addl $4, %esi			# increments esi by 4
	loop grades_loop		# loops while ecx > 0
	
# restore calle registers
	popl %ebx
	popl %edi
	popl %esi

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

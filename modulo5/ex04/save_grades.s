/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * save_grades.s
 * 
 */

.section .data	
	.equ AGE_OFFSET, 0			# Student's age is at the beginning of the structure (last byte 3)
	.equ NUMBER_OFFSET, 4		# Student's number starts at byte 4 (last byte 7)
	.equ GRADES_OFFSET, 8		# Student's grades starts at byte 4 (last byte 8 + (4*10) - 1 = 47)
	.equ NAME_OFFSET, 48		# Student's name starts at byte 48 (last byte 48 + (1*80) - 1 = 127)
	.equ ADDRESS_OFFSET, 128	# Student's address starts at byte 128 (last byte 128 + (1*120) - 1 = 247)
	.equ STRUCT_LENGTH, 248		# Struct's total size

	.equ NUM_GRADES, 10			# Number of grades

.section .text
.global save_grades    		# void save_grades(Student *s, int *new_grades);

save_grades:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function

# saves calle registers
	pushl %esi
	pushl %edi

# body of the function
	movl 12(%ebp), %esi 		# move pointer of new_grades (2nd param) to esi (source)
	movl 8(%ebp), %edi 			# move pointer of s (1st param) to edi (destination)
	movl $NUM_GRADES, %ecx		# moves 

loop:
	movl -4(%esi, %ecx, 4), %ebx				# moves last grade in list to ebx
	movl %ebx, GRADES_OFFSET-4(%edi, %ecx, 4)	# moves ebx to last grade of struct
	loop loop
	
	
# restores callee registers
	popl %edi
	popl %esi
	
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

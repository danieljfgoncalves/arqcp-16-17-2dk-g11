/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * TEST_EQUAL.S
 * 
 */

.section .data

.section .text
.global test_equal    # int test_equal(char *a, char *b)

test_equal:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	
	movl $1, %eax			# Sets eax to 1
	
	movl 8(%ebp), %esi		# 1st param (1st string) to esi (source)
	movl 12(%ebp), %edi		# 2nd param (2nd string) to edi (destination)
	
equal_loop:
	movb (%esi), %bl		# moves value pointed by esi to bl
	movb (%edi), %bh		# moves value pointed by edi to bh
	
	cmpw $0, %bx			# compares bx to 0 (bx - 0)
	je end					# jumps to end if both equal to 0 
							# (both because if only one register was 0 it would be false)
	
	cmpb %bl, %bh			# compares value pointed by bl to bh (bh - bl)
	jne false				# if not equal jump to false
	
	incl %esi				# next address of first string
	incl %edi				# next address of second string
	jmp equal_loop			# loops

false:
	decl %eax				# decrements eax by 1
	
end:
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

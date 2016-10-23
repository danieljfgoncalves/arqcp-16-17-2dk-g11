/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data

.global num				# 32-bit integer

.section .text

.global check_number	# int check_number(void)

check_number:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function

	movl $1, %ecx		# moves value 1 to ecx (will be needed for odd/even test)
	movl num, %eax		# moves num to eax
	
	testl %eax, %eax	# tests (AND operator) with eax. The SF flag changes accordingly.
						# (SF = 1 - Negative, else, SF = 0 positive)
	js negative			# if SF=1, jump to negative (SF only updates after a mathematical operation,
						# thats why we need a test instruction to update based on eax -> eax AND eax = eax)
	testl %eax, %ecx	# tests eax and ecx (value 1). AND returns 1 if least significant bit of eax is 1.
						# (ex. 1101 0101 AND 0000 0001 = 0000 0001 or 1101 0100 AND 0000 0001 = 0000 0000)
	je even_positive	# je jumps to even_positive if ZF=1
	movl $3, %eax		# moves value 3 to eax (meaning the number is odd/positive)
	jmp end				# jump to end
	
	negative:
	testl %eax, %ecx	# test eax and ecx for odd/even.
	je even_negative	# je jumps to even_negative if ZF=1
	movl $4, %eax		# moves value 4 to eax (meaning the number is odd/negative)
	jmp end				# jump to end
	
	even_positive:
	movl $1, %eax		# moves value 1 to eax (meaning the number is even/positive)
	jmp end				# jump to end
	
	even_negative:
	movl $2, %eax		# moves value 2 to eax (meaning the number is even/negative)
	
	end:
# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

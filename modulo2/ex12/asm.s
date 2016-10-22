/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
length:						
	.int 0				# 32-bit variable
width:
	.int 0				# 32-bit variable

.global length
.global width

.section .text
.global get_area    	# unsigned int get_area(void) -> l x w

get_area:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function

	movl width, %eax	# moves width to eax.
	mull length			# multiplies length x eax and result is in
						# edx:eax (unsigned numbers). Returns eax.
						
						# if result is bigger that max value of a 32-bit
						# int, we will return a wrong value because the 
						# return value is a int (32-bit) and not a 
						# long long int (64-bit).

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

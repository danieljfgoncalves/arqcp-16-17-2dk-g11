/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
op1:						
	.int 0				# 32-bit variable
op2:
	.int 0				# 32-bit variable

.global op1
.global op2

.section .text
.global sum    			# int sum(void) -> OP1 + OP2
						# checks if carry & overflow flags are active:
						# 0 = none active;
						# 1 = carry flag active;
						# 2 = overflow flag active;
						# 3 = both active;

sum:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	
	# sums op1 + op2
	movl op1, %ebx			# moves op1 to ebx.
	addl op2, %ebx			# adds op2 to ebx.
	
	jc carry_active			# jumps if carry flag is active
	jo overflow_active		# jumps if overflow flag is active
	
	
	# reset al
	movb $0, %al			# moves value 0 to al. In case no flag is
							# active returns al.
	jmp end					# jumps to the end

carry_active:
	jo carry_overflow		# jumps if overflow flag is active too.
	movb $1, %al			# moves value 1 to al and returns al.
	jmp end
	
overflow_active:
	movb $2, %al			# moves value 2 to al and returns al.
	jmp end
	
carry_overflow:
	movb $3, %al			# moves value 3 to al and returns al.
	
end:

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

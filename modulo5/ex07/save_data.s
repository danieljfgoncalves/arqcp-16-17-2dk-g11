/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * SAVE_DATA.S
 * 
 */

.section .data

.equ W_OFFSET, 0		# w is at the beginning of the structure
.equ J_OFFSET, 8		# j starts at byte 8 (short(2) + short(2) + short(2) + empty(2) = 8)
.equ C_OFFSET, 12		# c starts at byte 12

.section .text
.global save_data  # void save_data(s2 *s, short vw[3], int vj, char vc[3])

save_data:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# save callee registers
	pushl %ebx
	pushl %edi
	
# body of the function
	movl 8(%ebp), %edi			# moves address of s to edi
	
	movl $3, %ecx				# moves vw size to ecx (loop)
	movl 12(%ebp), %ebx			# moves address of vw to ebx (param 1)
	
vw_loop:
	movl (%ebx), %edx			# moves value of ebx to edx
	movl %edx, (%edi)			# moves edx tu value of edi
	addl $2, %ebx				# adds 2 (short size) to ebx
	addl $2, %edi				# adds 2 (short size) to edi
	loop vw_loop				# loops while ecx > 0
	
	movl 8(%ebp), %edi			# resets address of s in edi
	addl $J_OFFSET, %edi		# adds correct offset to edi
	movl 16(%ebp), %ebx			# moves vj to ebx (param 2)
	movl %ebx, (%edi)			# moves ebx to value of edi
	
	movl 20(%ebp), %ebx			# moves vc to ebx
	movl $3, %ecx				# moves vw size to ecx (loop)

	movl 8(%ebp), %edi			# resets address of s in edi
	addl $C_OFFSET, %edi		# adds the C_OFFSET to edi		
	
c_loop:
	movl (%ebx), %edx		# moves value of ebx to edx
	movl %edx, (%edi)		# moves dl to value of edi
	incl %ebx				# increments ebx by 1 (char = 1 byte)
	incl %edi				# increments edi by 1
	loop c_loop 			# loops while ecx > 0
	
# restore calle registers
	popl %edi
	popl %ebx

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

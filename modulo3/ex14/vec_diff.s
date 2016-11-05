/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * VEC_DIFF.S
 * 
 */

.section .data

.global ptrvec1				# short pointer to vec1 (32-bit)
.global ptrvec2				# short pointer to vec2 (32-bit)
.global ptrvec3				# short pointer to vec3 (32-bit)
.global ptraux				# short pointer to array for int exists(void) (32-bit)
.global x					# short integer for int exists(void) (16-bit)
.global num					# integer variable (32-bit)

.section .text

.global vec_diff			# int vec_diff(void)

vec_diff:

# prologue
	pushl %ebp      		# save previous stack frame pointer
	movl %esp, %ebp  		# the stack frame pointer for sum function
	
# body of the function
	movl ptrvec1, %esi		# moves short pointer ptrvec1 to esi (source)
	movl ptrvec3, %edi		# moves short pointer ptrvec3 to edi (destination)
	movl num, %ecx			# moves num to ecx (loop counter)	
	cmpl $0, %ecx			# compares if ecx is 0
	je end					# jumps to end if counter is already 0

	movl $0, %eax			# clears eax
	movl $0, %ebx			# clears ebx
	
	movl ptrvec2, %edx		# moves ptrvec2 to ebx (no need to save & restore)
	movl %edx, ptraux		# moves ebx to prtaux
	
loop:
	movw (%esi), %bx		# moves value pointed by esi to bx
	movw %bx, x				# moves bx to x variable
	
	pushl %eax				# saves eax before call
	pushl %ecx				# saves ecx before call
	call exists				# calls exists
	testl $1, %eax			# tests return (eax) if 0 or 1
	popl %ecx				# restores ecx after call
	popl %eax				# restores eax after call

	jne skip				# jumps to skip if eax is 1
	movl %ebx, (%edi)		# moves ebx to value pointed by edi
	addl $4, %edi			# next address of vec3
	incl %eax				# increments by 1 eax
	
skip:
	addl $2, %esi			# next address of vec1
	loop loop				# loops until ecx is 0
	
end:
# epilogue
	movl %ebp, %esp  		# restore the previous stack pointer ("clear" the stack)
	popl %ebp     			# restore the previous stack frame pointer
	ret

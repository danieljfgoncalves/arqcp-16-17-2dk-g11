/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * CHANGE_ADDRESS.S
 * 
 */

.section .data

.equ ADDRESS_OFFSET, 128

.section .text
.global change_address  # void change_address(Student *s, char *new_address);

change_address:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# save callee registers
	pushl %esi
	pushl %edi
	pushl %ebx
	
# body of the function
	movl 8(%ebp), %esi			# moves student structure to esi
	addl $ADDRESS_OFFSET, %esi	# adds 128 to esi to access address (age + number + grades + name  (4 + 4 + 4*10 + 1*80 = 128))
	movl %esi, %eax				# moves esi (address) to eax
	movl 12(%ebp), %edi			# moves new_address to edi		
	
	movl $120, %ecx				# moves 120 to ecx to loop (120 = size of address)
	
clear_address_loop:
	movl $0, (%eax)				# moves 0 to eax to clear address
	incl %eax					# increments eax by 1
	loop clear_address_loop

main_loop:
	movb (%edi), %bl			# moves character of new_address to bl		
	cmpb $0, %bl				# compares bl - 0 to check for end of string	
	je end						# if bl = 0, jumps to end
				
	movb %bl, (%esi)			# moves character in bl to eax	
	incl %edi					# increments edi by 1
	incl %esi					# increments esi by 1	
	jmp main_loop		
	
end:
	
# restore calle registers
	popl %ebx
	popl %edi
	popl %esi

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

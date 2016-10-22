/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
.global code
.global current_salary
.equ CODE_MANAGER, 101
.equ CODE_ENGINEER, 102
.equ CODE_TECHNICIAN, 103
.equ RAISE_MANAGER, 100
.equ RAISE_ENGINEER, 200
.equ RAISE_TECHNICIAN, 150
.equ RAISE_OTHER, 50

.section .text
.global new_salary_calc  # int new_salary_calc(void)

new_salary_calc:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movl code, %eax					# move code to eax
	movl current_salary, %ebx		# move current_salary to ebx
	cmpl $CODE_MANAGER, %eax		# compare eax with code for manager
	je manager_salary				# jumps to manager_salary
	cmpl $CODE_ENGINEER, %eax		# compare eax with code for engineer
	je engineer_salary				# jumps to engineer_salary
	cmpl $CODE_TECHNICIAN, %eax		# compare eax with code for technician
	je technician_salary			# jumps to technician_salary
	jmp other_salary				# any of the other codes correspond to the received code - jumps to other_salary
	
manager_salary:
	addl $RAISE_MANAGER, %ebx			# adds the manager raise value to ebx
	mov %ebx, %eax						# move ebx to eax
										# return value in eax
	jmp end
	
engineer_salary:
	addl $RAISE_ENGINEER, %ebx			# adds the engineer raise value to ebx
	mov %ebx, %eax						# move ebx to eax
										# return value in eax
	jmp end

technician_salary:
	addl $RAISE_TECHNICIAN, %ebx		# adds the technician raise value to ebx
	mov %ebx, %eax						# move ebx to eax
										# return value in eax
	jmp end

other_salary:
	addl $RAISE_OTHER, %ebx				# adds the other positions raise value to ebx
	mov %ebx, %eax						# move ebx to eax
										# return value in eax
	jmp end

end:


# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

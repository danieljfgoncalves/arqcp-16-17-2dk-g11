/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.S
 * 
 */

.section .data
.global current_temp
.global desired_temp
.equ DECREASE_VALUE, 2
.equ INCREASE_VALUE, 3
.equ SECONDS_MIN, 60

.section .text
.global temp_change_time  # int temp_change_time(void)

temp_change_time:

# prologue
	pushl %ebp      	# save previous stack frame pointer
	movl %esp, %ebp  	# the stack frame pointer for sum function
	
# body of the function
	movw current_temp, %ax		# moves current_temp to ax
	movw desired_temp, %bx		# moves desired_temp to bx
	cmpw %bx, %ax				# compares desired temperature with current teperature
	jg decrease_temperature		# if current_temp > desired_temp
	jl increase_temperature		# if current_temp < desired_temp
	
decrease_temperature:
	subw %bx, %ax					# subtracts ax to bx (to get temperature difference)
	imulw $DECREASE_VALUE, %ax		# multiply ax with DECREASE_VALUE. Result stored in ax
	imulw $SECONDS_MIN, %ax			# final value in seconds (return ax)
	jmp end
	
increase_temperature:
	subw %ax, %bx					# subtracts bx to ax (to get temperature difference)
	imulw $INCREASE_VALUE, %bx		# multiply ax with DECREASE_VALUE. Result stored in bx
	imulw $SECONDS_MIN, %bx			# final value in seconds
	movw %bx, %ax					# moves bx to ax (return ax)
	jmp end

end:
	

# epilogue
	movl %ebp, %esp  	# restore the previous stack pointer ("clear" the stack)
	popl %ebp     		# restore the previous stack frame pointer
	ret

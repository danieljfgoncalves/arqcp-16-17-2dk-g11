#
# Daniel Goncalves > 1151452@isep.ipp.pt
# ARQCP - Turma 2DK
#
# Makefile
#

# variables
INCLUDES = sum_multiples_x.h print_vec.h
SOURCES = sum_multiples_x.s print_vec.c main.c 
OBJFILES = sum_multiples_x.o print_vec.o main.o 
EXEC = exec

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

# How to transform .c to .o ; $< -- file name
.c.o:
	gcc -Wall -g -c $<

# How to transform .s to .o ; $< -- file name
.s.o:
	gcc -Wall -g -c $<

${OBJFILES}: ${SOURCES} ${INCLUDES}

run: ${EXEC}
	./${EXEC}
	
debug: ${EXEC}
	gdb -tui ${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}


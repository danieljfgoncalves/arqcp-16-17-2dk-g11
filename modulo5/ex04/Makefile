#
# Daniel Goncalves > 1151452@isep.ipp.pt
# ARQCP - Turma 2DK
#
# Makefile
#

# variables
INCLUDES = save_grades.h save_data.h student.h
SOURCES = save_grades.s save_data.c main.c 
OBJFILES = save_grades.o save_data.o main.o 
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


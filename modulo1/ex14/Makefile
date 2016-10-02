#
# Daniel Goncalves > 1151452@isep.ipp.pt
# ARQCP - Turma 2DK
#
# Makefile
#

# variables
INCLUDES = frequencies.h print_vec.h
SOURCES = frequencies.c print_vec.c main.c 
OBJFILES = frequencies.o print_vec.o main.o 
EXEC = exec

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

# How to transform .c to .o ; $< -- file name
.c.o:
	gcc -Wall -g -c $<

${OBJFILES}: ${SOURCES} ${INCLUDES}

run: ${EXEC}
	./${EXEC}

debug: ${EXEC}
	gdb -tui ${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}



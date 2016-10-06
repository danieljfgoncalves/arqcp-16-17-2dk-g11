#
# Tiago Correia - 1151031@isep.ipp.pt
# ARQCP - Turma 2DK
#
# Makefile
#

# variables
INCLUDES = consecutive_sets.h set_verif.h array_fill.h
SOURCES = consecutive_sets.c set_verif.c array_fill.c main.c 
OBJFILES = consecutive_sets.o set_verif.o array_fill.o main.o 
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


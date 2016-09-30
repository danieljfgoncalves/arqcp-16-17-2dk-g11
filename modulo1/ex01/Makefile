#
# Tiago Correia - 1151031@isep.ipp.pt
# ARQCP - Turma 2DK
#
# Makefile
#

exec: print_data.o main.o
	gcc -Wall -g -o exec print_data.o main.o

print_data.o: print_data.h print_data.c
	gcc -Wall -g -c print_data.c
	
main.o: main.c
	gcc -Wall -g -c main.c
	
clean:
	rm -f print_data.o main.o

/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "f.h"
#include "f2.h"
#include "f3.h"
#include "f4.h"

int i = 0, j = 0;

/*
 * Module 2 - Exercise 22
 */
int main(void) {
	
	// f()
	i = 7;
	j = 3;
	printf("i: %d, j: %d, f() = %d\n", i, j, f());
	
	i = 30;
	j = 30;
	printf("i: %d, j: %d, f() = %d\n", i, j, f());
	
	i = 2;
	j = 20;
	printf("i: %d, j: %d, f() = %d\n\n", i, j, f());
	
	// f2()
	i = 3;
	j = 4;
	printf("i: %d, j: %d, f2() = %d\n", i, j, f2());
	
	i = 2;
	j = 1;
	printf("i: %d, j: %d, f2() = %d\n", i, j, f2());
	
	i = 2;
	j = 2;
	printf("i: %d, j: %d, f2() = %d\n\n", i, j, f2());
	
	// f3()
	i = 4;
	j = 1;
	printf("i: %d, j: %d, f3() = %d\n", i, j, f3());
	
	i = 1;
	j = 1;
	printf("i: %d, j: %d, f3() = %d\n", i, j, f3());
	
	i = 2;
	j = 6;
	printf("i: %d, j: %d, f3() = %d\n", i, j, f3());
	
	i = 3;
	j = 10;
	printf("i: %d, j: %d, f3() = %d\n\n", i, j, f3());
	
	// f4()
	i = 4;
	j = 1;
	printf("i: %d, j: %d, f3() = %d\n", i, j, f4());
	
	i = 1;
	j = 7;
	printf("i: %d, j: %d, f3() = %d\n", i, j, f4());
	
	i = 5;
	j = 6;
	printf("i: %d, j: %d, f3() = %d\n", i, j, f4());
	
	i = 10;
	j = 10;
	printf("i: %d, j: %d, f3() = %d\n\n", i, j, f4());
	
	return 0;
}

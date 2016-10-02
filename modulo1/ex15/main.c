/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include <math.h>
#include "array_fill.h"
#include "set_verif.h"
#include "set_increment.h"

/*
 * Module 1 - Exercise 15
 */
int main(){
	
	int size = 100;
	int vec[size];
	
	array_fill(vec, size);
	set_verif(vec, size);
	
	return 0;
}

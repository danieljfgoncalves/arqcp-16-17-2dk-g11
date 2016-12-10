/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "greater_date.h"

/*
 * Module 4 - Exercise 15b
 */

int main(void) {
	
	// example for different day
	unsigned int date1 = 0x031B07E0; //03-27-2016
	unsigned int date2 = 0x031A07E0; //03-26-2016
	int result = greater_date(date1, date2);
	printf("The greater date is 0x%08x\n\n", result);
	
	// example for different month
	date1 = 0x051B07D8; //05-27-2016
	date2 = 0x0C1B07D8; //12-27-2016
	result = greater_date(date1, date2);
	printf("The greater date is 0x%08x\n\n", result);
	
	// example for different year
	date1 = 0x031B07E0; //03-27-2016
	date2 = 0x031B07D8; //03-27-2008
	result = greater_date(date1, date2);
	printf("The greater date is 0x%08x\n\n", result);
	
	// example for equal dates
	date1 = 0x031B07E0; //03-27-2016
	date2 = 0x031B07E0; //03-27-2016
	result = greater_date(date1, date2);
	printf("The greater date is 0x%08x\n\n", result);
	
	return 0;
}

/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "test_equal.h"

/*
 * Module 4 - Exercise 6
 */
int main(void) {
	
	// 1
	char str1[] = "Hello";
	char *ptr1 = str1;
	char str2[] = "Hello";
	char *ptr2 = str2;
	
	int boolean = test_equal(ptr1, ptr2);
	
	printf("String 1: \"%s\"\nString 2: \"%s\"\nString 1 & 2 are %sequal\n\n",
	str1, str2, (boolean == 1) ? "" : "not ");
	
	// 2
	char str3[] = "Hi";
	ptr1 = str3;
	char str4[] = "Hello";
	ptr2 = str4;
	
	boolean = test_equal(ptr1, ptr2);
	
	printf("String 1: \"%s\"\nString 2: \"%s\"\nString 1 & 2 are %sequal\n\n",
	str3, str4, (boolean == 1) ? "" : "not ");
	
	// 3
	char str5[] = "";
	ptr1 = str5;
	char str6[] = "";
	ptr2 = str6;
	
	boolean = test_equal(ptr1, ptr2);
	
	printf("String 1: \"%s\"\nString 2: \"%s\"\nString 1 & 2 are %sequal\n\n",
	str5, str6, (boolean == 1) ? "" : "not ");
	
	// 4
	char str7[] = "Trump is the new USA President!";
	ptr1 = str7;
	char str8[] = "That is so wrong in many ways!";
	ptr2 = str8;
	
	boolean = test_equal(ptr1, ptr2);
	
	printf("String 1: \"%s\"\nString 2: \"%s\"\nString 1 & 2 are %sequal\n\n",
	str7, str8, (boolean == 1) ? "" : "not ");
	
	return 0;
}

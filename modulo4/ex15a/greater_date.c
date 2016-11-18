/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * greater_date.c
 * 
 */
 
#include <stdio.h>

#define mask_year(date)		(date & 0x0000FFFF)
#define mask_month(date)	(date & 0xFF000000)
#define mask_day(date)		(date & 0x00FF0000)

/*
 * Returns the greater of two dates.
 * 
 * int date1 - first date
 * int date2 - second date
 * 
 */
int greater_date(int date1, int date2){	
	if(mask_year(date1) > mask_year(date2)){
		return date1;
	} else if(mask_year(date1) == mask_year(date2)){
		if(mask_month(date1) > mask_month(date2)){
			return date1;
		} else if(mask_month(date1) == mask_month(date2)){
			if(mask_day(date1) > mask_day(date2)){
				return date1;
			} else if(mask_day(date1) == mask_day(date2)){
				return date1;
			}
		}
	} 
	return date2;
}

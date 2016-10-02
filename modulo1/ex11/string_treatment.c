/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * string_treatment.c
 * 
 */
 
#include <stdio.h>

/*
 * Receives the addresses of the original string and an empty string, then fills the second string with a copy of the first, removing spaces, punctuation and converting all uppercase letters to lowercase.
 */
void string_treatment(char *str1, char *str2){
  
  int i, k = 0;
  
  /* Uses str1 to fill str2 */
  for (i = 0; str1[i] != '\0';){
	  if(str1[i] == ' ' || str1[i] == ',' || str1[i] == '.') { /* ignores spaces and punctuation */
		  i++;
	  }
	  else if(str1[i] >= 'A' && str1[i] <= 'Z'){ /* changes uppercase to lowercase */
		  str2[k] = (str1[i]+32);
		  k++;
		  i++;
	  } else {
		  str2[k] = str1[i];
          k++;
          i++;
	  }
  }
  str2[k] = 0; /* fills the last position with the null terminator */
}

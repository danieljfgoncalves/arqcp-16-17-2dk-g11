#include <stdio.h>

int string_to_int(char *str);

int main(int argc, char *argv[])
{	
	int converted_num;
	
	if (argc > 1)
	{
		converted_num = string_to_int(argv[1]);
	} 
	else
	{
		//char string[] = {'1', '2', '3', '4', '\0'}; 
		char string[] = "123456789"; /* alternative declaration of a string */
		converted_num = string_to_int(string);
	}
	
	printf("The number is: %d.\n", converted_num);

	return(0);
}

/* Converts a string value to a integer (no validations made for now).
 * 
 * @param char *str - a string of chars.
 * @return the converted integer.
 */
int string_to_int (char *str)
{
	int pot = 10; /* potência para criar o numero */
	int number = 0; /* instanciates the number with 0. */

	int i = 0;
	while (str[i] != '\0') 	
	{
		number = number * pot + (str[i] - '0');
		i++;
	}
	return (number);
}

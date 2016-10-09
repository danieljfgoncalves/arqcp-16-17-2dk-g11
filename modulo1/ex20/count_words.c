/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * count_words.c
 */
 
/*
 * Counts how many words is in the string.
 * 
 * char *str - string received
 * 
 * returns the number of words in the given string.
 * 
 */
int count_words(char *str)
{
	int counter = 0;
	
	// adds one for the first word, if any.
	counter += (*str == '\0') ? 0 : 1;
	
	while (*str != '\0')
	{
		if (*str == ' ' && *(str + 1) != '\0') // if the string ends with a space it won't count.
		{
			counter++;
		}
		str++;
	}
	
	return counter;
}

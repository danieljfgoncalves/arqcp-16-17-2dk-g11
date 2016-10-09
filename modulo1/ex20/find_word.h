/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * find_word.h
 */
 
#include <stdio.h>

/*
 * Searches for a specific word in a string.
 * 
 * char *str - string received
 * char* word - word to search
 * char* initial_addr - address where the search must begin
 * 
 * returns the address of the position in the string where the word was found or NULL if the word does not exist in the string
 */
char* find_word(char *str, char* word, char* initial_addr);

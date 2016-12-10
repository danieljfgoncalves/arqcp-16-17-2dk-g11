/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * save_data.h
 * 
 */

/**
 * Saves a student's info (passed as parameters) in the fields of a 
 * structure passed by parameter.
 * 
 * Student *p - pointer to struct student
 * int age - Student's age
 * int number - Student's number
 * char *name - Student's name
 * char *address - Student's address
 */
void save_data(Student *p, int age, int number, char *name, char *address);

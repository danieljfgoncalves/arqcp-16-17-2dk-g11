/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * save_grades.h
 * 
 */

#ifndef SAVE_GRADES_H
#define SAVE_GRADES_H
/**
 * Saves a student's grades (passed as parameters) in the fields of a 
 * structure passed by parameter.
 * 
 * Student *s - pointer to struct student
 * int *new_grades - new grades
 */
void save_grades(Student *s, int *new_grades);
#endif
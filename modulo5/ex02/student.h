/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * student.h
 * 
 */

/**
 * Struct to represent a Student
 */
typedef struct {
  int age;
  int number;
  int grades[10];
  char name[80];
  char address[120];
} Student;

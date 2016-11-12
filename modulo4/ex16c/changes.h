/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * changes.h
 * 
 */
#ifndef CHANGES_H
#define CHANGES_H
/**
 * Inverts the 4 least significative bits of the second byte of an integer, 
 * but only when the value of those 4 bits is greater than 7.
 * 
 * int *ptr - pointer to integer.
 */
void changes(int *ptr);
#endif

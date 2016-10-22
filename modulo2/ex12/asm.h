/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ASM.H
 * 
 */
 
#ifndef ASM_H
#define ASM_H

/*
 * Computes the area of a rectangle. We use unsigned ints because negative 
 * areas don't exist.
 */
unsigned int get_area(void);

extern unsigned int length;
extern unsigned int width;

#endif

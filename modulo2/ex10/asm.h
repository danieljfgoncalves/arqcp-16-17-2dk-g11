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
 * Sums two integers and checks if carry & overflow flags are active.
 * 
 * if carry flag is active returns 1, if overflow flag is active returns
 * 2, if carry & overflow flag is active returns 3, otherwise returns 0.
 */
char sum(void);

extern int op1;
extern int op2;

#endif

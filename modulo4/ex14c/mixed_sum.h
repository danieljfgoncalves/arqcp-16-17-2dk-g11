/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * mixed_sum.h
 * 
 */
#ifndef JOIN_BITS_H
#define JOIN_BITS_H
/**
 * Sums int join_bits(int a, int b, int pos) with int join_bits(int b, int a, int pos).
 * 
 * int a - first integer.
 * int b - second integer.
 * int pos - position to activate (from 0...31).
 * 
 * Returns the mixed sum.
 */
int mixed_sum(int a, int b, int pos);
#endif

#include <stdio.h>

int main() {
	/* sizeof retorna tamanho em bytes (1 byte = 8 bits) */
	printf("O número de bits de um char é %u\n", (sizeof(char)*8));
	printf("O número de bits de um int é %u\n", (sizeof(int)*8));
	printf("O número de bits de um long int é %u\n", (sizeof(long int)*8));
	printf("O número de bits de um float é %d\n", (sizeof(float)*8));
	printf("O número de bits de um double é %u\n", (sizeof(double)*8));
				
	return (0);
	}

#include <stdio.h>

#define LENGTH 30

void fill_vector(int *vec);

int main() 
{
	int vector[LENGTH] = {0};
	
	fill_vector(vector);
	
	return (0);
}

void fill_vector(int *vec)
{
	int sum = 0;
	
	int i = 0;
	while(i < LENGTH)
	{
		printf("Introduce the element at index number %d of the array\n", (i + 1));
		scanf("%d", &vec[i]);
		sum += vec[i];
		i++;
	}
	
	printf("The sum of all elements is %d & the average is %d.\n", sum, sum/i);
}

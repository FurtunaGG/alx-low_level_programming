#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of
 * a square matrix of integer
 * @a: The matrix of integer
 * @size: The size of matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}


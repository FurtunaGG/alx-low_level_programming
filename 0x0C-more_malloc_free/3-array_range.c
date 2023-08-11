#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - a function that creates an array of integers
 * @min: minimum value
 * @max: maxmimum value
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	int i, j;
	int *p;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	p = malloc(sizeof(int) * j);
	for (i = 0; i < j; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}

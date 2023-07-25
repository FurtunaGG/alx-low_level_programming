#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, j, k;

	j = 0;

	for (i = 0; str[i] != '\0'; i++)
		j++;

	k = (j / 2);

	if ((j % 2) == 1)
		k = ((j + 1) / 2);

	for (i = k; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}


#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int r, c;

		for (r = 0; r < n; r++)
		{
			for (c = 0; c < n; c++)
			{
				if (r == c)
					_putchar('\\');
				else if (c < r)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

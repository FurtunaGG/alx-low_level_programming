#include "main.h"

/**
 * more_numbers - print numbers 0-14 ten times
 * retur: void
 */
void more_numbers(void)
{
	int i;
	int c;

	i = 0;
	while (i < 10)
	{
	for (c = 0; c <= 14; c++)
	{
		if (c >= 10)
			_putchar('1');
		_putchar(c % 10 + '0');
	}
	i++;
	_putchar('\n');
	}
}

#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	l = 'a';
	while
		(l <= 'z') {
			if (l != 'q' && l != 'e')
				putchar(l);
			l++;
		}
	putchar('\n');
	return (0);
}


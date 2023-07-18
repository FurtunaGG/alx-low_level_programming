#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char l;
	
	i = 0; 
	l = 'a';
	while
		(i < 10) {
			putchar(i + '0');
			i++;
		}
	while
		(l <= 'f') {
			putchar(l);
			l++;
		}
	putchar('\n');
	return (0);
}

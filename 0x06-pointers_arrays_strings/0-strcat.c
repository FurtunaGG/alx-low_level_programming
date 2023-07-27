#include "main.h"
#include <stdio.h>
/**
* _strcat - This function appends the src string to the dest string
* @dest: input value
* @src: input value
*
* Return: desc
*/
char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}

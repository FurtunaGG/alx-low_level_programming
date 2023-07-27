#include "main.h"
#include <stdio.h>
/**
* _strncat - This function appends onr string to another stringi
* using at most n bytes from src
* @dest: input value
* @src: input value
*@n: input value
* Return: desc
*/
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int k;
	
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}

#include "main.h"
/**
* leet - encode into 1337speak
* @n: input value
* Return: n value
*/
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	i = 0;
	while (n[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
				n[i] = s2[j];
		}
		i++;
	}
	return (n);
}

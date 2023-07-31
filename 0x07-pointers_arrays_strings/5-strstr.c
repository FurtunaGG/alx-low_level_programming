#include "main.h"
/**
 * _strstr - Locate a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 * Return: A pointer to the begining of the located substring
 * If substring not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *n = needle;

		while (*m == *n && *n != '\0')
		{
			m++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}


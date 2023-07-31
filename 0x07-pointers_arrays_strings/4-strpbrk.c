#include "main.h"
/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: string to be serached
 * @accept: The set of bytes to be searched for
 * Return : A pointer to the matched byte
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
			s++;
		}
		return ('\0');
}

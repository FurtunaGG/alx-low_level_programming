#include "main.h"
#include <stdio.h>
/**
* Determines if a number is positive, negative, or zero.
*
* This function takes an integer 'i' as input and prints whether it is +, -, 0
*
* @param i The integer to be checked. It can be positive, negative, or zero.
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}


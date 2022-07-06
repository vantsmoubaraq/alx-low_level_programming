#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include "main.h"

/**
 *positive_or_negative - produces negative or positive number
 *No Description:
 *@n: number to be tested
 *Return: Nothing
 */

void positive_or_negative(int n)
{
/* your code goes there */
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else
{
	printf("%d is negative\n", n);
}
}

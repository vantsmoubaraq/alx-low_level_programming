#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of characters of size, size
 *@size: size of an array
 *@c: first element of the array
 *Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	i = 0;
	if (size > 0)
	{
	a = malloc(size * sizeof(char));
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
	}
	return ('\0');
}

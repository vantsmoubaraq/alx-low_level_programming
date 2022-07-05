#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print letters of the alphabet 10 times
 *
 * Description:print_alphabet_x10 - print letters a to z
 * Return -Always 0
 */

void print_alphabet_x10(void)
{
	char counter;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (counter = 'a'; counter <= 'z'; counter++)
	{
		_putchar(counter);
	}
		_putchar('\n');
	}
}

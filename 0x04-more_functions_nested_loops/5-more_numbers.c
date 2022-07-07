#include "main.h"

/**
 * more_numbers - prints 1-14 10x
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int cycle, num;

	for (cycle = 1; cycle <= 10; cycle++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num < 10)
			{
				_putchar (num + '0');
			}
			else
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

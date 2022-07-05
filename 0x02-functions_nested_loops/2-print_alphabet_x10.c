#include <stdio.h>

/**
 * main - Entry point
 * print_alphabet_x10 -print_alphabet_x10
 *
 * Description:print_alphabet_x10 - print letters a to z
 * Return -Always 0
 */

void print_alphabet_x10(void)
{
	char counter;

	for (counter = 'a'; counter <= 'z'; counter++)
	{
		putchar(counter);
	}
	putchar('\n');
}

int main(void)
{
	int i = 10;

	for (i = 0; i < 10; i++)
	{
		print_alphabet_x10();
	}
	return (0);
}

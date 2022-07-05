#include <stdio.h>
/**
 * main - check the code
 * Return: Always zero
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}

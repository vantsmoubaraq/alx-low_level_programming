#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print letter a to z
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

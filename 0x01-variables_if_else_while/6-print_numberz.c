#include <stdio.h>
#include <stdlib.h>

/**
 * main-Entry Point
 *
 * Description - Print all numbers 0 to 9
 *
 * Return: 0
 */

int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}

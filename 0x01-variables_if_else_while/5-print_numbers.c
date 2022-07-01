#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Description - print numbers 0 to 9
 *
 *Return: always return 0
 */

int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
printf("%d", num);
}
putchar('\n');
return (0);
}

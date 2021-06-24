#include "holberton.h"
/**
 * print_line - drew a straight line
 * @n: number of times underscore is printed
 * Description: can only use _putchar to print
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;

for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}

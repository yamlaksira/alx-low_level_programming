#include "holberton.h"
/**
 * print_square - print a square
 * @size: size of square
 * Description: can only use _putchar to print. use '#' to print square.
 */
void pribt_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}

}

}

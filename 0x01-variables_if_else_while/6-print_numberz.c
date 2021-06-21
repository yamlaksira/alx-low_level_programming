#include <stdio.h>
/**
 * main - main block
 * Description: print all numbers of base 10, starting from 0.
 * you are not allowed to use any variable of type char.
 * you can only use `putchar` to print to console.
 * you can only use `putchar` twice.
 * Return: 0
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');

return(0);
}

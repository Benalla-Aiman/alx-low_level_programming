#include "main.h"
/**
* print_line - prints a straight line of n length
* @n: length of line
*
* Return: void
*/
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
_putchar('_');
_putchar('\n');
}

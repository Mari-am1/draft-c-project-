#include "main.h"


/**
* print_triangle - prints a triangle, followed by a new line
* @size: size of the triangle
*/

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int x, o;

for (x = 1; x <= size; x++)
{
for (o = x; o < size; o++)
{
_putchar(' ');
}

for (o = 1; o <= x; o++)
{
_putchar('#');
}

_putchar('\n');
}
}
}

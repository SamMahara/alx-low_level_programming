#include "main.h"

/**
 * times_table - Prints the 9 times table
 */

void times_table(void)
{
int row, col, res;

for (row = 0; row <= 9; row++)
{
_putchar('0');

for (col = 1; col <= 9; col++)
{
_putchar(',');
_putchar(' ');

res = row * col;

if (res < 10)
_putchar(' ');

if (res >= 10)
_putchar((res / 10) + '0');

_putchar((res % 10) + '0');
}
_putchar('\n');
}
}


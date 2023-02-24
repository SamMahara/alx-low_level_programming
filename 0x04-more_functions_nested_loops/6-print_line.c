#include "main.h"

/**
 * print_line - Prints a line of '_' n times.
 *
 * @n: Number of times to print '_'.
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
	_putchar('\n');
}
else
{
        for (i = 0; i < n; i++)
        {
            _putchar('_');
        }
        _putchar('\n');
}
}


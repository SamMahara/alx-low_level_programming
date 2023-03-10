#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The string to print the second half of
 */
void puts_half(char *str)
{
int i, len, n;

len = 0;
while (str[len] != '\0')
	len++;

n = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

for (i = n; i < len; i++)
	_putchar(str[i]);

_putchar('\n');
}


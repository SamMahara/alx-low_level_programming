#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;

while (*s)
{
if (*s == '-')
{
	sign = -sign;
}
if (*s >= '0' && *s <= '9')
{
	result = result * 10 + (*s - '0') * sign;
	if (result > 0 && sign < 0)
        {
		result = -result;
        }
        sign = 1;
}
s++;
}

return result;
}


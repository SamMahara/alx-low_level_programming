#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: Pointer to the buffer where the result will be stored.
 * @size_r: Size of the buffer.
 * 
 * Return: Pointer to the resulting string.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, i, j, carry, sum;

len1 = strlen(n1);
len2 = strlen(n2);

if (len1 > size_r || len2 > size_r)
	return (0);

i = len1 - 1;
j = len2 - 1;
carry = 0;

while (i >= 0 || j >= 0 || carry > 0)
{
	sum = carry;
	if (i >= 0)
		sum += n1[i] - '0';
	if (j >= 0)
		sum += n2[j] - '0';
	if (size_r <= 0)
		return (0);
	r[size_r - 1] = (sum % 10) + '0';
	carry = sum / 10;
	i--;
	j--;
	size_r--;
}

if (size_r <= 0)
	return (0);

return (r + size_r);
}


#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: Difference in ASCII value of first non-matching character
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
	if (s1[i] != s2[i])
        {
return (s1[i] - s2[i]);
        }
}

return (s1[i] - s2[i]);
}


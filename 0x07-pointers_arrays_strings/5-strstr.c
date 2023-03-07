#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to search in.
 * @needle: substring to search for.
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *start_haystack = haystack;
char *start_needle = needle;

while (*haystack)
{
	while (*needle && *haystack == *needle)
        {
            haystack++;
            needle++;
        }

        if (!*needle)
            return start_haystack;

        haystack = ++start_haystack;
        needle = start_needle;
}

return NULL;
}


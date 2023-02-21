#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the alphabet in lowercase, except q and e
 * using the putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
putchar(letter);
}

putchar('\n');

return (0);
}


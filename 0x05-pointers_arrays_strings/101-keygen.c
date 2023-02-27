#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random passwords for the program 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
char password[84];
int i, sum, diff, n;

srand(time(NULL));

sum = 0;
for (i = 0; sum < 2772 - 122; i++)
{
	n = rand() % 10 + 48;
	password[i] = n;
	sum += n;
}
diff = 2772 - sum;
password[i] = diff;
password[i + 1] = '\0';

printf("%s", password);

return (0);
}


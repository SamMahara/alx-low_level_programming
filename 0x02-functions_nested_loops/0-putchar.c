#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char s[] = "_putchar\n";
  int i;

  for (i = 0; i < 9; i++)
    {
      /* write character to stdout */
      write(1, &s[i], 1);
    }
  /* write new line character to stdout */
  write(1, &"\n", 1);

  return (0);
}


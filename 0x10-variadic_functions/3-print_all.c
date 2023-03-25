#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 *
 * @format: A list of types of arguments passed to the function.
 *
 * Description: The argument list must be terminated by NULL.
 *              Any other char in @format should be ignored.
 *              Prints a new line at the end of the function.
 **/
void print_all(const char * const format, ...)
{
va_list args;
char *str;
int i = 0, first_arg = 1;
char current_char;

va_start(args, format);

while (format && format[i])
{
	current_char = format[i];
	switch (current_char)
	{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			first_arg = 0;
			break;
	}
	if (format[i + 1] && first_arg)
		printf(", ");
		i++;
		first_arg = 1;
}
printf("\n");
va_end(args);
}



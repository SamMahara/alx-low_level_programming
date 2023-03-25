#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using the given function pointer
 * @name: the name to be printed
 * @f: a function pointer that takes a char pointer as argument and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
	f(name);
}


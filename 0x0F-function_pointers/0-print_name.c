#include "function_pointers.h"

/**
 * print_name - calls back a function via a pointer
 * @name: the name for function argument
 * @f: the function to be called.
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

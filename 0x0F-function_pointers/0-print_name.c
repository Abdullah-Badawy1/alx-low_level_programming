#include "function_pointers.h"

/**
 * print_name - Prints a name using a specified function.
 * @name: Name to print.
 * @f: Function pointer to the printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}

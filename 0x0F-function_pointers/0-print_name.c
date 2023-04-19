#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name using pointer to a function
 * @name: String to pass
 * @f: Pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

		f(name);
}

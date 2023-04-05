#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion - Returns length of a string
 *@*s: string to be measured
 *
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit+= _strlen_recursion(s + 1);
	}

	return (i);
}

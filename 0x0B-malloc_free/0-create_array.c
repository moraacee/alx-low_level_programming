#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Creates an array and assigns the values to it
 *@size: size of the array
 *@c: the char to fill
 *
 * Return: NULL if no memory or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)

		return (NULL);

	i = 0;
	a = malloc(sizeof(c) * size);

	if (a == NULL)

		return (NULL);

	while (i < size)
	{
		a[i] = c;
		i++;
	}

	return (a);
}

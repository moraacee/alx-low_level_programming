#include "main.h"
#include <stdio.h>

/**
* _memset - fill a block of memory with a constant value
* @s: Pointer to the beggining of memory to be fillled
* @b: Constant value to fill the memory with
* @n: number of bytes to fill
*
* Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	    s[i] = b;
	}
	return (s);
}

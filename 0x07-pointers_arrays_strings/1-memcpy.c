#include "main.h"
#include <stdio.h>

/**
*_memcpy - a function that copies memory area
*@dest: memory where copied information is stored
*@src: memory from where information is copied
*@n: number of bytes to be copied
*
*Return: A pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;

	for (int i = 0; i < n; i++)
	{
		*(src + i) = *(dest + i);
	}
	return (dest);
}

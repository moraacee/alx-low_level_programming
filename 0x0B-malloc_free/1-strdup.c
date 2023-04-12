#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a new string
 *@str: duplicate of the string
 *
 * Return: NULL if str is NULL
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	size_t len = strlen(str);
	char *dup_str = (char *)malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	strcpy(dup_str, str);

	return (dup_str);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - Duplicates a String
 *@str: Duplicate of the String
 *
 * Return: A pointer to a  string
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	size_t length  = strlen(str);
	char *dup_str = (char *) malloc((length + 1) * sizeof(char));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	strcpy(dup_str, str);

	return (dup_str);
}

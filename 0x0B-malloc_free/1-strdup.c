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
	int i;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		continue;

	i++;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';

	return (s);
}

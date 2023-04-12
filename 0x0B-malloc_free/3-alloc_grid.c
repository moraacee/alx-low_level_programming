#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Creates a grid of integers
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: A pointer to a pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			int k;

			for (k = 0; k <= i;  k++)
			{
				free(arr[k]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}

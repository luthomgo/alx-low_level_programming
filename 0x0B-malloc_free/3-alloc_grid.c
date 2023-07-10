#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: array of integer
 * @height: array og integer
 *
 * Return: width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **e;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	e = malloc(height * sizeof(int *));
	if (e == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		e[a] = malloc(width * sizeof(int));

		if (e[a] == NULL)
		{
		for (b = 0; b < a; b++)
		{
			free(e[b]);
		}
		free(e);
		return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			e[a][b] = 0;
		}
	}
	return (e);
}

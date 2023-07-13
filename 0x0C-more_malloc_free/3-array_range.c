#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - function that creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: min > max return NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int b, c;

	if (min > max)
		return (NULL);

	c = max - min + 1;

	a = malloc(sizeof(int) * c);

	if (a == NULL)
		return (NULL);
	for (b = 0; min <= max; b++)
		a[b] = min++;
	return (a);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - function that creates an array of chars
 * @size: size of the array
 * @c: array of chars
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		a[b] = c;
	return (a);
}

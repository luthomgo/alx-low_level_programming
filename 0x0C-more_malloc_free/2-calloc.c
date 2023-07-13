#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - function that allocates memory for an aray using malloc
 * @nmemb: number
 * @size: size
 *
 * Return: nmemb or size is 0, then _calloc then return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		c[a] = 0;
	return ((void *)c);
}

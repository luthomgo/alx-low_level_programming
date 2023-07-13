#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes of the allocated space
 * @new_size: is the new, in bytes of the new memory
 *
 * Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int b;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < old_size && b < new_size; b++)
	{
		a[b] = ((char *) ptr)[b];
	}
	free(ptr);
	return (a);
}

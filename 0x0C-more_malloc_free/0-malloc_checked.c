#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - function that allocates using malloc
 * @b:size
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}

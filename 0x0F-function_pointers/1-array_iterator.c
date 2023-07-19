#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that a executes a function given as a parameter
 * @array: array
 * @size: is the size of the array
 * @action: is a pointer to the function you need to uses
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

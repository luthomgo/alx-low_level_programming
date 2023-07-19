#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * @array: array
 * Return: index of 1st element for cmp  return 0 and size <=0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}

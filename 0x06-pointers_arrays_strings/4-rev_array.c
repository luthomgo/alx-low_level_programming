#include<stdio.h>
#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array
 * @n: is the num of elements of the array
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}

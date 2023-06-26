#include<stdio.h>
#include "main.h"
/**
 * print_array - function that prints n element of array of integers
 * @n: is the num of element of the array to be printed
 * @a: array
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

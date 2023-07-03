#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: a pointer
 * @size: size
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int b;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;


	for (b = 0; b < size; b++)
	{
		sum1 = sum1 + *(a + b * size + b);
		sum2 = sum2 + *(a + b * size + (size - b - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}

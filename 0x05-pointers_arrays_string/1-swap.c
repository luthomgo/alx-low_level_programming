#include<stdio.h>
#include "main.h"
/**
 * swap_int - function that swaps the values of value integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

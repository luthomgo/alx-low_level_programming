#include<stdio.h>
#include "main.h"
/**
 * largest_number - prints out the largest three number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: print larger number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}

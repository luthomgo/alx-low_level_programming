#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural root of a number
 * @n: integer
 *
 * Return: n does not have a natural root, the function should be -1
 */
int _sqrt_recursion(int n)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (b <= n)
	{
		b = a * a;
		a++;
	}
	if (b == n)
	{
		return (a);
	}
	else
	{
		return (-1);
	}
}

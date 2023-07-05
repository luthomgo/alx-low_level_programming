#include <stdio.h>
#include "main.h"

int  real_sqrt(int a, int b);

/**
 * _sqrt_recursion - function that returns the natural root of a number
 * @n: integer
 *
 * Return: n does not have a natural root, the function should be -1
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
		return (real_sqrt(n, 0));
}

/**
 * real_sqrt - finding the natural square root
 * @a: integer
 * @b: integer
 *
 * Return: root
 */
int real_sqrt(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	else
	{
		return (real_sqrt(b, a + 1));
	}
}

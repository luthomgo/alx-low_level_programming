#include <stdio.h>
#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: integer
 *
 * Return: n is lower than 0, then the function should re turn to -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}

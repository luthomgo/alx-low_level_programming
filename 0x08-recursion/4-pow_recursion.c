#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - functionthat return the value of x raised to the power y
 * @x: integer
 * @y: the power of x
 *
 * Return: y is lower than 0, the function should be -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}

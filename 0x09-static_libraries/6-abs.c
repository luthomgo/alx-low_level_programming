#include<stdio.h>
#include "main.h"
/**
 * _abs - function that computes the absolute value of a int
 * @a: the int
 * Return: Always 0
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}

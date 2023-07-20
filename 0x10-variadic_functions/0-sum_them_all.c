#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: if n == 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int b = 0;
	va_list c;

	va_start(c, n);
	for (a = 0; a < n; a++)
		b = b + va_arg(c, int);
	va_end(c);
	return (b);
}

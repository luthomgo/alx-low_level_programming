#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: is the string to be printed between th string
 * @n: is the number of string passsed to the function
 *
 * Return: if separator is NULL, don't print it
 * if one the string is NULL, NULL (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *b;
	va_list c;

	va_start(c, n);
	for (a = 0; a < n; a++)
	{
		b = va_arg(c, char *);
		if (!b)
			b = "nil";
		if (!separator)
			printf("%s", b);
		else if (separator && a == 0)
			printf("%s", b);
		else
			printf("%s%s", separator, b);
	}
	printf("\n");
	va_end(c);
}

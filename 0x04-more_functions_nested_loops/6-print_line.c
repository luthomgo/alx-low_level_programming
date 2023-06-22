#include <stdio.h>
#include "main.h"
/**
 * print_line - function that draws a straight line
 * @n: int of the munber times the char print
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int a;

	for (a = 48; a < n; a++)
	{
		_putchar(95);
	}
}

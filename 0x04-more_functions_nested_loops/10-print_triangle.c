#include<stdio.h>
#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - a - 1; b++)
			_putchar(' ');
		for (b = size - a - 1; b < size; b++)
			_putchar(35);
		_putchar('\n');
	}
}

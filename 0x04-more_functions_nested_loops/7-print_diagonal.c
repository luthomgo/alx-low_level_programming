#include<stdio.h>
#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line
 * @n: is the num of times the char \ should be printed
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar('\n');
		}
		_putchar(92);
	}
}

#include<stdio.h>
#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: the print integer
 *
 * Return: Always 0
 */
void print_number(int n)
{
	int a;
	int b;
	int c;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	a = n;
	b = 1;

	while (a > 9)
	{
		b = b * 10;
		a = a / 10;
	}

	while (b > 0)
	{
		c = n / b;
		_putchar(c + '0');
		n = n - c * b;
		b = b / 10;
	}
}


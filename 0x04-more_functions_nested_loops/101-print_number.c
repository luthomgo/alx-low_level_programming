#include<stdio.h>
#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: int that need to checked
 *
 * Return: Always 1
 */
void print_number(int n)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	if (n < 0)
	{
		_putchar (45);
		a = n * -1;
	}
	else
	{
		a = n;
	}
	b = a;
	c = 1;

	while (b > 9)
	{
		b = b / 10;
		c = c * 10;
	}
	for (; c >= 1; c = c / 10)
	{
		putchar(((a / c) % 10) + 48);
	}
}

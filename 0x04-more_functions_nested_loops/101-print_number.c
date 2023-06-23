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

	if (n < 0)
	{
		_putchar (45);
		a = -n;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + 48);
}

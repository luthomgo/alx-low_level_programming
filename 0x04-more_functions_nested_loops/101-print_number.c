#include<stdio.h>
#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: int that need to checked
 *
 * Return: Always 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + 48);
}

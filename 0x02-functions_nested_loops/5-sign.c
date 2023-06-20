#include<stdio.h>
/**
 * print_sign - function that prints the sign of a num
 * @n: the number
 *
 * Return: 1 that prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if the n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

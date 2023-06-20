#include<stdio.h>
/**
 * print_last_digit - function that print the last digit of a num
 * @a: the int
 *
 * Return: Always 0
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (b < 0)
	{
		b = b * -1;
	}
	putchar(b + '0');
	return (b);
}

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

	if (a < 0)
		a = -a;
	b = a % 10;
	if (b < 0)
		b = -b;
	putchar(b + '0');
	return (b);
}

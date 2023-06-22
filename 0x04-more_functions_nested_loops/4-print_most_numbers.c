#include<stdio.h>
#include "main.h"
/**
 * print_most_numbers - func that prints the num from 0 to 9 not print 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a == 50 || a == 52)
			continue;
		_putchar(a);
	}
	_putchar('\n');
}

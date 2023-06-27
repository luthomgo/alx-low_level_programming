#include<stdio.h>
#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: a string that is printed
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	while (a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

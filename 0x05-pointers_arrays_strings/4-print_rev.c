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
	int a;
	int b;

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	for (b = a - 1; b >= 0; b--)
	{
		putchar(*(s + b));
	}
	putchar('\n');
}

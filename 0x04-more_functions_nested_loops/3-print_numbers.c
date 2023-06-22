#include<stdio.h>
#include "main.h"
/**
 * print_number - function that prints the number from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a < 57; a++)
	{
		putchar(a);
	}
	putchar('\n');
}

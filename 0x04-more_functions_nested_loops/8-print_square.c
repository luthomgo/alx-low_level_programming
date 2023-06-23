#include<stdio.h>
#include "main.h"
/**
 * print_square - function that prints a square where the size of square
 * @size: size of square
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}


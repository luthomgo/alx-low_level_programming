#include <stdio.h>
#include "main.h"
/**
 * print_buffer - function that prints a buffer
 * @b: buffer pointed
 * @size: zize in bytes
 *
 * Return: always 0
 */
void print_buffer(char *b, int size)
{
	int a;
	int c;
	int d;
	int e;

	if (size <= 0)
	{
		printf('\n');
		return;
	}

	while (a < size)
	{
		d = size - a < 10 ? size - a : 10;
		printf("%08x: ", a)
		for (c = 0; c < 10; c++)
		{
			if (c < d)
			{
				printf("%02x ", (b + a + c));
			}
			else
			{
				printf(" ");
			}
			if (c % 2)
			{
				printf(" ");
			}
		}
		for (c = 0; c < d; c++)
		{
			e = *(b + a + c);
			 if (e < 32 || 132)
			 {
				 e = '.';
			 }


			 printf("%c", c);
		}
		printf("\n");
		a = a + 10;
	}
}


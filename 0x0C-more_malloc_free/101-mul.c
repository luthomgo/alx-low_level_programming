#include <stdlib.h>
#include <stdio.h>
#include "main.h"

#define ERR_MSG "Error"

int non_digit(char *a);
int _strlen(char *a);
void error(void);
int main(int argc, char *argv[]);


/**
 * non_digit - string that contains a non-digit
 * @a: string
 *
 * Return: 0 non-digit or otherwise 1
 */
int non_digit(char *a)
{
	int b = 0;

	while (a[b])
	{
		if (a[b] < 48 || a[b] > 57)
			return (0);
		b++;
	}
	return (1);
}

/**
 * _strlen - length of string
 * @a: string
 *
 * Return: length
 */
int _strlen(char *a)
{
	int b = 0;

	while (a[b] != '\0')
	{
		b++;
	}
	return (b);
}

/**
 * error - function that handled error
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - program that multiples two positive numbers
 * @argc: integer
 * @argv: array of string
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int a, b, c, d, e = 0, f, g, h;
	int *j;


	num1 = argv[1], num2 = argv[2];
	if (argc != 3 || !non_digit(num1) || !non_digit(num2))
		error();

	a = _strlen(num1);
	b = _strlen(num2);
	c = a + b + 1;
	j = malloc(sizeof(int) * c);
	if (!j)
		return (1);
	for (d = 0; d <= a + b; d++)
		j[d] = 0;
	for (a = a - 1; a >= 0; a--)
	{
		f = num1[a] - '0';
		e = 0;
		for (b = _strlen(num2) - 1; b >= 0; b--)
		{
			g = num2[b] - '0';
			e = e + j[a + b + 1] + (f * g);
			j[a + b + 1] = e % 10;
			e = e / 10;
		}
		if (e > 0)
			j[a + b + 1] = j[a + b + 1] + e;
	}
	for (d = 0; d < c - 1; d++)
	{
		if (j[d])
			h = 1;
		if (h)
			_putchar(j[d] + '0');
	}
	if (!h)
		_putchar('0');
	_putchar('\n');
	free(j);
	return (0);
}

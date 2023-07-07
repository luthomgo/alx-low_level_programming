#include <stdio.h>
#include "main.h"
/**
 * main - a program that that multiple two numbers
 * @s: string
 *
 * Return: string
 */
int _atoi(char *s)
{
	int a, b, c, d, e, f;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[a] != '\0')
		a++;

	while (b < a && d == 0)
	{
		if (s[b] == 45)
			++e;
		if (s[b] >= 48 && s[b] <= 57)
		{
			f = s[b] - 48;
			if (e % 2)
				f = -f;
			c = c * 10 + f;
			d = 1;
			if (s[b + 1] < 48 || s[b + 1] > 57)
				break;
			d = 0;
		}
		b++;
	}
	if (d == 0)
		return (0);
	return (c);
}
/**
 * main - program that multiplies two number
 * @argc: integer
 * @argv: array of string
 *
 * Return: 1 error or otherwise always 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);

	return (0);
}


#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that adds positive numbers
 * @argc: integer
 * @argv: array of string
 *
 * Return: Always 0 otherwise Error if it's 1
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	b = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		int c;

		for (c = 0; argv[a][c]; c++)
		{
			if (argv[a][c] < '0' || argv[a][c]  > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		b = b + _atoi(argv[a]);
	}
	printf("%d\n", b);
	return (0);
}

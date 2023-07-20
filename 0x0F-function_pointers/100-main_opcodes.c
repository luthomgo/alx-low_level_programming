#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: integer
 * @argv: array of pointer
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*c)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(2);
	}
	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (b = 0; b < a; b++)
	{
		opcode = *(unsigned char *)c;
	printf("%.2x", opcode);
	if (b == a - 1)
		continue;
	printf(" ");
	c++;
	}
	printf("\n");

	return (0);
}

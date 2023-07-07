#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receive
 * @argc: integer
 * @argv: array of string
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

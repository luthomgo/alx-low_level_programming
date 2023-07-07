#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name
 * @argc: integer
 * @argv: array of string
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

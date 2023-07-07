#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed into it
 * @argc: interger
 * @argv: array of string
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the minimum of coin to make change for an amount of money
 * @argc: integer
 * @argv: array of string
 *
 * Return: 1 or otherwise always 0
 */
int main(int argc, char *argv)
{
	int a, b, c;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Erorr\n");
		return (1);
	}


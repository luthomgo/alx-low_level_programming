#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints the minimum number of coins to make change
 * @argc: integer
 * @argv: array of string
 *
 * Return: != 1 print Error otherwise return 1
 */
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int a, b, c;
	       int coins[] = {25, 10, 5, 2, 1};
	       
	       c = _atoi(argv[1]);
	       b = 0;

		for (a = 0; a < 5; a++)
		{
			if (c >= coins[a])
			{
				b = b + c / coins[a];
				c = c % coins[a];
			}
		}
		printf("%d\n", b);
	}
	else
	{
		printf("Error\n");return (1);
	}
	return (0);
}

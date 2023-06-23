#include<stdio.h>
#include "main.h"
/**
 * main - program that prints from 1 to 100
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a == 3) && (a == 5))
		{
			printf("FizzBuzz");
		}
		else if (a == 3)
		{
			printf("Fizz");
		}
		else if (a == 5)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
	}
	printf("\n");
	return (0);
}

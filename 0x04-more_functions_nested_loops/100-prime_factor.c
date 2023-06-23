#include<stdio.h>
#include "main.h"
/**
 * main - program that finds and prints the largest prime factor
 *
 * Return: Always 0
 */
int main(void)
{
	long int a;
	int b;

	a = 612852475143;
	for (b = 2; b <= a; b++)
	{
		if (a % b == 0)
		{
			a = a / b;
			b--;
		}
	}
	printf("%d\n", b);
	return (0);
}

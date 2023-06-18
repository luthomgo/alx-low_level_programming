#include<stdio.h>
/**
 * main - program that prints all possible combinations
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	a = 0;

	while (a < 10)
		putchar(a);
	if (a != 9)
	{
		putchar(',');
		putchar(' ');

	}
	a++;
	return (0);
}

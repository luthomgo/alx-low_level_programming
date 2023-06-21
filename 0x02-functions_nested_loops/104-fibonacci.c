#include<stdio.h>
/**
 * main - program that finds and prints the first 98 num start with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	unsigned long int b;
	unsigned long int c;
	unsigned long int d;

	b = 1;
	c = 2;

	printf("%lu, %lu", b, c);

	for (a = 0; a < 96; a++)
	{
		d = b + c;
		printf(", %lu", d);
		b = c;
		c = d;
	}
	printf("\n");
	return (0);
}

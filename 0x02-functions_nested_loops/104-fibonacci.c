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

	b = 0;
	c = 1;

	for (a = 0; a < 98; a++)
	{
		printf("%lu", b);
		if (a != 97)
			printf(",");
		d = b + c;
		b = c;
		c = d;
	}
	printf("\n");
	return (0);
}

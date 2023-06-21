#include<stdio.h>
/**
 * main - program that prints the first 50 fibonacci num, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	unsigned long int b;
	unsigned long int c;
	unsigned long int result;

	b = 1;
	c = 2;

	for (a = 0; a < 50; a++)
	{
		printf("%lu, ", b);
		if (a != 49)
		result = b + c;
		b = c;
		c = result;
	}
	printf("\n");
	return (0);
}

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
		result = b + c;
		printf("%lu", result);

		b = c;
		c = result;

		if (a == 49)
			printf('\n');
		else
			printf(',');
	}
	return (0);
}

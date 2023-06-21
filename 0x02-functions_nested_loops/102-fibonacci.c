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

	a = 50;
	b = 0;
	c = 1;

	while (b <= a)
	{
		printf("%ld", b);
		if (b != a)
			printf(',');
		result = b + c;
		b = c;
		c = result;
	}
	return (0);
}

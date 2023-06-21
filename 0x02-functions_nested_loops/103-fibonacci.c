#include<stdio.h>
/**
 * main - seq that is generate by adding the two terms start with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int b;
	unsigned long int c;
	unsigned long int d;
	unsigned long int sum;

	b = 1;
	c = 2;
	sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
			sum = sum + b;
		d = b + c;
		b = c;
		c = d;
	}
	printf("%lu\n", sum);
	return (0);
}

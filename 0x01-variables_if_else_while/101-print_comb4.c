#include<stdio.h>
/**
 * main - program that print all possible different combinations of three digit
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a < 57; a++)
	{
		for (b = 49; b < 57; b++)
		{
			for (c = 50; c < 58; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);

					putchar(b);

					putchar(c);

					if (a != 55 || b != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

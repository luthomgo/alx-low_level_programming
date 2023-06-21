#include<stdio.h>
/**
 * times_table - function that prints the 9 times tables, starting with 0
 *
 * Return: Always 0
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = b * a;
			if (b == 0)
			{
				putchar(c + '0');
			}
			if (c < 10 && b != 0)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(c + '0');
			}
			else if (c >= 10)
			{
				putchar(',');
				putchar(' ');
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');
			}
		}
		putchar('\n');
	}
}

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

	for (a = 0; a <= 9; a++)
	{
		b = a * 9;

		if (b > 9)
			putchar((b / 10) + '0');
		if (a < 9)
			putchar(',');
		putchar(' ');
	}
	putchar('\n');
}

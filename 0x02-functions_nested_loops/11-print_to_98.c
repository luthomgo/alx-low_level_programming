#include<stdio.h>
/**
 * print_to_98 - function that prints all natural num from n to 98
 * @n: the num
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	int a;
	int b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d\n", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
				printf("%d\n", b);
			else if (b == 98)
				printf("%d\n", b);
		}
	}
}

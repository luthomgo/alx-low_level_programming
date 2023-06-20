#include<stdio.h>
/**
 * print_alphabet_x10 - function that print 10 times the alphabet, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alpha;
	int a;

	a = 0;
	alpha = 97;

	while (a < 10)
	{
		while (alpha <= 122)
		{
			putchar(alpha);
			alpha++;
		}
		putchar('\n');
		a++;
	}
}

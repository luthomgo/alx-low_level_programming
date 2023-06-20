#include<stdio.h>
/**
 * print_alphabet - function that prints the alphabet, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}

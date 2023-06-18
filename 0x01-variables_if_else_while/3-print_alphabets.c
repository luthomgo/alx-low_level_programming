#include<stdio.h>
/**
 * main - program that prints ALPHA in lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char b;

	for (b = 97; b <= 122; b++)
		putchar(b);

	for (b = 65; b <= 90; b++)
		putchar(b);

	putchar('\n');

	return (0);
}

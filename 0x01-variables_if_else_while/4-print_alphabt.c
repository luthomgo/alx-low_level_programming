#include<stdio.h>
/**
 * main - program that prints the ALPHA in lowercase except q and e
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char b;

	for (b = 97; b <= 122; b++)
	{
		if (b == 113 || b == 101)
			continue;
		putchar(b);
	}
	putchar ('\n');
	return (0);
}

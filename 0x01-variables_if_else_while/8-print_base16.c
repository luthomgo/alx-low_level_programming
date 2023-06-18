#include<stdio.h>
/**
 * main - program that prints the num of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
		putchar(a + '0');

	for (b = 97; b <= 102; b++)
		putchar(b);
	putchar('\n');

	return (0);
}

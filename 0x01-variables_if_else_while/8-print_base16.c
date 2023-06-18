#include<stdio.h>
/**
 * main - program that prints the num of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
		putchar(a + '0');

	for (a = 97; a <= 102; a++)
		putchar(a);
	putchar('\n');

	return (0);
}

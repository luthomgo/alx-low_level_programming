#include<stdio.h>
/**
 * main - program that prints the num of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
		putchar(a);

	for (a = 0; a <= 16; a++)
		putchar(a + '0');
	putchar('\n');

	return (0);
}

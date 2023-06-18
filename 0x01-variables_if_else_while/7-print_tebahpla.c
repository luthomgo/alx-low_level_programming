#include<stdio.h>
/**
 * main- program that prints the lowercase ALPHA in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
		putchar(a);
	putchar('\n');

	return (0);
}

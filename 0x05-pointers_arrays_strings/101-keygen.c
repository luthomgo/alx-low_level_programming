#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates random valid passwords for a program
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	char b;

	srand(time(NULL));
	while (a <= 2645)
	{
		b = rand() % 128;
		a += b;
		putchar(b);
	}
	putchar(2772 - a);
	return (0);
}

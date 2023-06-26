#include<stdio.h>
#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	char n;
	int b;
	int c;
	int d;

	for (b = 0; s[b] != '\0'; b++)
		;
	c = 0;
	d = b / 2;
	while (d--)
	{
		n = s[b - c - 1];
		s[b - c - 1] = s[c];
		s[c] = n;
		c++;
	}
}

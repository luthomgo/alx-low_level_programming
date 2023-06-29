#include<stdio.h>
#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13
 * @a: a string
 *
 * Return: string
 */
char *rot13(char *a)
{
	int b;

	for (b = 0; a[b] != '\0'; b++)
	{
		if (a[b] >= 97 && a[b] <= 109)
		{
			a[b] = a[b] + 13;
		}
		else if (a[b] >= 110 && a[b] <= 122)
		{
			a[b] = a[b] - 13;
		}
		else if (a[b] >= 65 && a[b] <= 77)
		{
			a[b] = a[b] + 13;
		}
		else if (a[b] >= 78 && a[b] <= 90)
		{
			a[b] = a[b] - 13;
		}
	}
	return (a);
}

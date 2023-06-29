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
	int c;

	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; c < 52; c++)
		{
			if (a[b] == rot13[c])
			{
				a[b] = ROT13[c];
				break;
			}
		}
	}
	return (a);
}

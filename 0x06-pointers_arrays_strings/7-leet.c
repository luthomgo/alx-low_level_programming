#include <stdio.h>
#include "main.h"
/**
 * *leet - function that encodes a string 1337
 * @a: a string
 *
 * Return: string
 */
char *leet(char *a)
{
	int b;
	int c;
	char leetname[] = "aAeEoOtTlL";
	char leetnumber[] = "4433007711";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if (a[b] == leetname[c])
			{
				a[b] = leetnumber[c];
			}
		}
	}
	return (a);
}

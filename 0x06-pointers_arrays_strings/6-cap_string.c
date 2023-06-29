#include<stdio.h>
#include"main.h"
/**
 * *cap_string - function that capitalizes all words of a string
 * @a: string
 *
 * Return: Always 0
 */
char *cap_string(char *a)
{
	int b;

	b = 0;

	while (a[b] != '\0')
	{
		if (b == 48 && a[b] >= 97 && a[b] <= 122)
		{
			a[b] = a[b] - 32;
		}
		if (a[b] == 32 || a[b] == '\t' || a[b] ==  '\n' || a[b] == 44 || a[b] == 59 || a[b] == 46 || a[b] == 33 || a[b] == 63 || a[b] == 34 || a[b] == 40 || a[b] == 41 || a[b] == 123 || a[b] == 125)
		{
			b++;
			if (a[b] >= 97 && a[b + 1] <= 122)
			{
				a[b] = a[b] - 32;
			}
		}
		else
		{
			b++;
		}
	}
	return (a);
}

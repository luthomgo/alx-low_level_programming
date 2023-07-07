#include <stdio.h>
#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: a pointer of a string that locates the first occurrence
 * @accept: a pointer of a string
 *
 * Return: a pointer to the bytein s that matches one in accept or NULl
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return ('\0');
}

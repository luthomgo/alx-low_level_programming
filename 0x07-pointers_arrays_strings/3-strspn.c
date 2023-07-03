#include <stdio.h>
#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to string to a number of bytes
 * @accept:  pointer to a string
 *
 * Return: number of bytes in segment of s which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (accept[b] == '\0')
			break;
	}
	return (a);
}

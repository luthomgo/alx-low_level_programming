#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointed memory area
 * @b: constant byte
 * @n: first bytes of memory
 *
 * Return: a pointer to th memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}

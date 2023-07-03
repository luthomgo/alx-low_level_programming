#include<stdio.h>
#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: copies of the number of byte
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}

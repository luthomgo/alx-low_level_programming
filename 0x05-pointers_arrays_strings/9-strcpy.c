#include "main.h"
#include<stdio.h>
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: buffer pointed to
 * @src: copy the string pointed
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

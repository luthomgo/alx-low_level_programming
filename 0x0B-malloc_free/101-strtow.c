#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int word(char *a);
int count(char *a);

/**
 * word - function that locates a word within a string
 * @a: string
 *
 * Return: end of string
 */
int word(char *a)
{
	int b = 0, c = 0;

	while (*(a + b) && *(a + b) != ' ')
	{
		c++;
		b++;
	}
	return (c);
}
/**
 * count - count the number within string
 * @a: string
 *
 * Return: word within string
 */
int count(char *a)
{
	int b = 0, c = 0, d = 0;

	for (b = 0; *(a + b); b++)
		d++;
	for (b = 0; b < d; b++)
	{
		if (*(a + b) != ' ')
		{
			c++;
			b = b + word(a + b);
		}
	}
	return (c);
}
/**
 * **strtow - function that splits a string into words
 * @str: a pointer to an array of string
 *
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	int a = 0, b, c, d, e;
	char **f;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	b = count(str);
	if (b == 0)
		return (NULL);
	f = malloc(sizeof(char *) * (b + 1));
	if (f == NULL)
		return (NULL);
	for (c = 0; c < b; c++)
	{
		while (str[a] == ' ')
			a++;
		d = word(str + a);
		f[c] = malloc(sizeof(char) * (d + 1));
		if (f[c] == NULL)
		{
			for (; c >= 0; c--)
				free(f[c]);
			free(f);
			return (NULL);
		}
		for (e = 0; e < d; e++)
			f[c][e] = str[a++];
		f[c][e] = '\0';
	}
	f[c] = NULL;

	return (f);
}

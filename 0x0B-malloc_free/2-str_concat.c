#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: two string
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int b = 0, c = 0, d = 0, e = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[b])
		b++;

	while (s2[c])
		c++;

	e = b + c;
	a = malloc((sizeof(char) * e) + 1);

	if (a == NULL)
		return  (NULL);
	c = 0;
	while (d < e)
	{
		if (d <= b)
			a[d] = s1[d];
		if (d >= b)
		{
			a[d] = s2[c];
			c++;
		}
		d++;
	}
	a[d] = '\0';
	return (a);
}

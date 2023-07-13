#include <stdio.h>
#include  <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int b = 0, c = 0, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[b])
		b++;
	while (s2[c])
		c++;

	if (n >= c)
		n = c;
	a = malloc(sizeof(char) * (b + n + 1));
	if (a == NULL)
		return (NULL);
	for (d = 0; d < b; d++)
		a[d] = s1[d];
	for (d = 0; d < n; d++)
		a[b + d] = s2[d];
	a[b + n] = '\0';
		return (a);
}

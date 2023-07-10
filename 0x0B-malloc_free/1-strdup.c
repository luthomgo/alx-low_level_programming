#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - function that returns apointer to a newly allocated space
 * @str: pointer to a string
 *
 * Return: a pointer to the duplicated string and NULL if insufficient
 */
char *_strdup(char *str)
{
	char *a;
	int b, c = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		a++;
	a = malloc(sizeof(char) * (b + 1));
	if (a == NULL)
		return (NULL);
	for (c = 0; str[c]; c++)
		a[c] = str[c];
	return (a);
}

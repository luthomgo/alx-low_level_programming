#include <stdio.h>
#include "main.h"
/**
 * *string_toupper -  function that change all lowercase of a str to uppercase
 * @a: string
 *
 * Return: always 0
 */
char *string_toupper(char *a)
{
	int b;

	b = 0;
	while (a[b] != '\0')
	{
		if (a[b] >= 97 && a[b] <= 122)
		{
			a[b] = a[b] - 32;
		}
		b++;
	}
	return (a);
}

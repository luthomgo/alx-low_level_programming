#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: is a string that is checked
 *
 * Return: length
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}

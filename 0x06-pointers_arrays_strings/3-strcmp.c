#include<stdio.h>
#include "main.h"
/**
 * *_strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: an integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;

	while (s1[a] == s2[a])
	{
		if (s1[a] == '\0' || s2[a] == '\0')
		{
			break;
		}
		a++;
	}
	if (s1[a] == '\0' && s2[a] == '0')
	{
		return (0);
	}
	else
		return (-1);
}

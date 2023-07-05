#include <stdio.h>
#include "main.h"
/**
 * wildcmp - function that compare two string
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the string can be considered identical or otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return (0);
}

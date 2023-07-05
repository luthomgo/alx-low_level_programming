#include <stdio.h>
#include "main.h"

int result(char *l);
/**
 * is_palindrome - function that return 1 if the string is palindrome
 * @s: string
 *
 * Return: 1 if string is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int a;

	a = result(s);
	if (a <= 1)
	{
		return (1);
	}
	else if (s[0] != s[a - 1])
	{
		return (0);
	}
	else
	{
		s[a - 1] = '\0';
		return (is_palindrome(s + 1));
	}
}

/**
 * result - palindrome
 * @l: string
 *
 * Return: 1 if string is a palindrome and otherwise 0
 */
int result(char *l)
{
	if (*l == '\0')
	{
		return (0);
	}
	else
	{
		return (result(l + 1) + 1);
	}
}

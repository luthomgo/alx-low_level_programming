#include<stdio.h>
/**
 * _isalpha - function that checks for alpha char
 * @c: is the char
 *
 * Return: 1 if c is a letter, lowercase or uppercase or otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

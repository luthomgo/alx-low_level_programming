#include<stdio.h>
#include "main.h"
/**
 * _islower - function that checks for  lowercase char
 * @c: is the char
 *
 * Return: 1 if c is lowercase or otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

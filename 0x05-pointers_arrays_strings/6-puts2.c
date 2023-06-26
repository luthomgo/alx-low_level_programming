#include<stdio.h>
#include "main.h"
/**
 * puts2 - function that prints every char of a string,with the first char
 * @str: string of char
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}

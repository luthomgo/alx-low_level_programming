#include<stdio.h>
#include "main.h"
/**
 *  _puts - function that prints a string
 *  @str: string that is printed
 *
 *  Return: Always
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

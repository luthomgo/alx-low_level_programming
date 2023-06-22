#include<stdio.h>
/**
* _isupper - function that checks for uppercase char
* @c: the int checked
*
* Return: 1 if the char is uppercase or otherwise 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

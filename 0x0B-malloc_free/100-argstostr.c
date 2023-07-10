#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *argstostr - function that concatenates all the arguments
 * @ac: first arguments
 * @av: second arguments
 *
 * Return: a pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0;
	char *d;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			c++;
		}
		c++;
	}

	d = malloc(sizeof(char) * (c + 1));
	if (d == NULL)
	{
		return (NULL);
	}
	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			d[c] = av[a][b];
			c++;
		}
		d[c] = '\n';
		c++;
	}
	d[c] = '\0';

	return (d);
}

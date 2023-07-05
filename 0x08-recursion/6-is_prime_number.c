#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function that print prime number
 * @n: the integer input
 *
 * Return: 1 if the input integer is prime number otherwise 0
 */
int is_prime_number(int n)
{
	int a;

	if (n <= 1)
		return (0);

	for (a = 2; a <= n - 1; a++)
	{
		if (n % a == 0)
		{
			return (0);
		}
	}
	return (1);
}

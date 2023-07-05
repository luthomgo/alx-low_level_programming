#include <stdio.h>
#include "main.h"

int real_prime(int a, int b);
/**
 * is_prime_number - function that print prime number
 * @n: the integer input
 *
 * Return: 1 if the input integer is prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (real_prime(n, n - 1));
}

/**
 * real_prime - calculate prime number
 * @a: integer
 * @b: integer
 *
 * Return: 1 if the integer is prime number otherwise 0
 */
int real_prime(int a, int b)
{
	if (a >= b && b > 1)
	{
		return (1);
	}
	else if (b % a == 0 && a > 0)
	{
		return (0);
	}
	else
		return (real_prime(b, a + 1));
}

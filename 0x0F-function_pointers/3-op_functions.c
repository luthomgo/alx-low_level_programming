#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two number
 * @a: first number
 * @b: second mumber
 *
 * Return: sum of the two number
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between two number
 * @a: first number
 * @b: second number
 *
 * Return: difference of the two number
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiple of two number
 * @a: first number
 * @b: second number
 *
 * Return: multiple of the two number
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of the two number
 * @a: first number
 * @b: second number
 *
 * Return: division of the two number
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo number of the two number
 * @a: first number
 * @b: second number
 *
 * Return: modulo of the two number
 */
int op_mod(int a, int b)
{
	return (a % b);
}

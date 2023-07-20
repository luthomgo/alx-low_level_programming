#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function that select the  function to perform the operation
 * @s: is the operator passed as argument to the program
 *
 * Return: a pointer the function corr to the operator given as parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}

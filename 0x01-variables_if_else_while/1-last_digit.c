#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - assigning a random number to the variable n
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
		printf("Last digit of %d is int and is greater than 5\n", a);
	else if (a == 0)
		printf("Last digit of %d is int and is 0\n", a);
	else if (a < 6 && a != 0)
		printf("Last digit of %d is int and is less than 6 and not 0\n", a);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - progra that generates random valid password for the program
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	char password[11];

	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		int r = rand() % 62;


		if (r < 26)
		{
			password[i] = 'a' + r;
		}
		else if (r < 52)
		{
			password[i] = 'A' + r - 26;
		}
		else
		{
			password[i] = '0' + r - 52;
		}
	}
	password[10] = '\0';
	printf("%s\n", password);
	return (0);
}

#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string
 *
 * Return: Always 0
 */
int _atoi(char *s)
{
        unsigned int a;
        int b;

        a = 0;
        b = 1;

        do {
                if (*s == '-')
                        b *= -1;
                else if (*s >= '0' && *s <= '9')
                        a = (a * 10) + (*s - '0');
                else if (a > 0)
                        break;
        } while (*s++);
        return (a * b);
}

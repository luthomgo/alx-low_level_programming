#include "main.h"
/**
 * *_strncat - function that apppend two string
 * @dest: first string
 * @src: second string
 * @n: a integer
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int a;
        int b;

        a = 0;
        while (dest[a] != '\0')
                a++;
        for (b = 0; b < n && src[b] != '\0'; b++)
        {
                dest[a + b] = src[b];
        }
        dest[a + n] = '\0';
        return (dest);
}

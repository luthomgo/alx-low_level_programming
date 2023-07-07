#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: a pointer of string
 * @needle: first occurrenece of the substring
 *
 * Return: a pointer to the beginning of the located substring or NUll
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a;
	unsigned int b;
	
	for (a = 0; *(haystack + a); a++)
	{
		for (b = 0; *(needle + b); b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (needle[b] == '\0')
			return (haystack + a);
	}
	return ('\0');
}

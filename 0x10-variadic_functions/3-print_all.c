#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 *  @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *b, *e = "";
	va_list d;

	va_start(d, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", e, va_arg(d, int));
					break;
				case 'i':
					printf("%s%d", e, va_arg(d, int));
					break;
				case 'f':
					printf("%s%f", e, va_arg(d, double));
					break;
				case 's':
					b = va_arg(d, char *);
					if (!b)
						b = "(nil)";
					printf("%s%s", e, b);
					break;
				default:
					a++;
					continue;
			}
			e = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(d);
}


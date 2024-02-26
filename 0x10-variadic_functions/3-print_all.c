#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: list all types of arguments that are
 * passed into the a function
 *
 */

void print_all(const char * const format, ...)
{
	int j = 0;
	char *STR;
	char *SEPARATE = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", SEPARATE, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", SEPARATE, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", SEPARATE, va_arg(list, double));
					break;
				case 's':
					STR = va_arg(list, char*);
					if (!STR)
						STR = ("nil");
					printf("%s%s", SEPARATE, STR);
					break;
				default:
					j++;
					continue;
			}
			SEPARATE = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(list);
}

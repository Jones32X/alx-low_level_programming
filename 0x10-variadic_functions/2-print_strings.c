#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints stings follwed by a new line
 * @separator: string to be printed between the strings
 * @n: amount of strings passed to the function
 * @...: amount of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list STRINGS;
	char *str;
	unsigned int INDEX = 0;

	va_start(STRINGS, n);
	for (; n > INDEX; INDEX++)
	{
		str = va_arg(STRINGS, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (INDEX != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(STRINGS);
}

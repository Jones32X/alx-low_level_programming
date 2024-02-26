#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: amount of times for numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int INDEX = 0;

	va_start(numbers, n);

	for (; n > INDEX; INDEX++)
	{
		printf("%d", va_arg(numbers, int));

		if (INDEX != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of
 * all its parameters.
 * @n: a,ount of parameters passed to function
 * @...: amount of parameters to calculate the sum
 * Return: if  n == 0 elese sum of all the
 * parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list APP;
	unsigned int j = 0;
	unsigned int SUM = 0;

	va_start(APP, n);

	for (; j < n; j++)
		SUM += va_arg(APP, int);
	va_end(APP);

	return (SUM);
}

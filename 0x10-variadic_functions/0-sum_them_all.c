#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function
 * @n: no of parameter passed into function
 * @...: variable no of parameters
 *
 * Description: returns sum of all its parameters
 *
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbs;
	unsigned int i, sum = 0;

	va_start(numbs, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numbs, int);

	va_end(numbs);

	return (sum);
}

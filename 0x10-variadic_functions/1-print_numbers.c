#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function
 * @seperator: string to be seperated between numbers
 * @n: no of arguments
 *
 * Description: prints numbers
 *
 * Return: Always 0
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, unsigned int));
		if (i < (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(nums);
	printf("\n");
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function
 * @seperator: string to be printed between strings
 * @n: no of strings passed to function
 * @...: variable no of strings
 *
 * Description: prints strings followed by new line
 *
 * Result: Always 0
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strg;
	char *str;
	unsigned int i;

	va_start(strg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strg, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && seperator != NULL)
			printf(("%s"), seperator);
	}
	va_end(strg);

	printf("\n");
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - func
 * @arg: list of args pointing to the
 * character to be printed
 *
 * Description: prints a char
 */

void print_char(va_list arg)
{
	char alpbt;

	alpbt = va_arg(arg, int);
	printf("%c", alpbt);
}

/**
 * print_int - func
 * @arg: list of args pointing to the
 * int to be printed
 *
 * Description: prints an int
 */

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - func
 * @arg: list of args pointin to the
 * float to be printed
 *
 * Description: prints a float
 */

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%F", num);
}

/**
 * print_string - func
 * @arg: list of args pointin to the
 * str to be printed
 *
 * Description: prints a string
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("nil");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - function
 * @format: argument to be printed
 * @...: variable no of arguments to be printed
 *
 * Description: prints anything
 *
 * Return: Always 0
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *seperator = "";
	ptyp_t funcc[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + 1)))
	{
		j = 0;

		while (j < 4 && (*(format + 1) != *(funcc[j].d)))
			j++;

		if (j < 4)
		{
			printf("%s", seperator);
			funcc[j].pnt(args);
			seperator = ", ";
		}
		i++;
	}
	va_end(args);

	printf("\n");
}

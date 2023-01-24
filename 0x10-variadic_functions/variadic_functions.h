#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct ptyp - function
 * @d: data type
 * @pnt: function that prints
 *
 * Description: new struct defining a printer
 */

typedef struct ptyp
{
	char *d;
	void (*pnt)(va_list arg);
} ptyp_t;

#endif

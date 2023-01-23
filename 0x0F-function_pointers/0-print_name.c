#include "function_pointers.h"

/**
 * print_name - function
 * @name: name to be printed
 * @f poiter to the function that prints the name
 *
 * Description: a function that prints a name
 *
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

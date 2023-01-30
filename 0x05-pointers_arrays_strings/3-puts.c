#include "main.h"

/**
 * _puts - function
 * @str: pointer to value address
 *
 * Description: prints a string, followed by a new line
 * to stdout
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

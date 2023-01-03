#include "main.h"

/**
 * print_line - function name
 * @n: number of times to print line
 *
 * Description: draws a straight line in the terminal
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}

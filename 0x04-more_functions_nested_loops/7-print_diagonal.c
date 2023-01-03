#include "main.h"

/**
 * print_diagonal - function name
 * @n: number of times to print
 *
 * Description: draws a diagonal line on the terminal
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n > 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			_putchar(' ');
		}
		i++;
	}
	if (i == 0)
		_putchar('\n');
}

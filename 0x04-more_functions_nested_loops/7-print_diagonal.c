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
	int i, j;

	i = 0;
	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}

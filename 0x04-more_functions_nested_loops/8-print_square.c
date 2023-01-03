#include "main.h"

/**
 * print_square - function name
 * @size: size of the square
 *
 * Description: prints a square, followed by new line
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	while (i < size && size > 0)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}

#include "main.h"

/**
 * print_triangle - function name
 * @size: size of triangle
 *
 * Description: prints a triangle followed by a new line
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int r, c, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (r = 0; r < size; r++)
	{
		for (c = size - r; c > 1; c--)
		{
			_putchar(' ');
		}
		for (k = r + c; k >= 1; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

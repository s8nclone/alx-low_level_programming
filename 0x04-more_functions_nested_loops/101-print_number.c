#include "main.h"

/**
 * print_number - function entry
 * @n: integer
 *
 * Description: prints an integer
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int x, y;
	int i;
	int z = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	x = n;
	y = x;
	if (x > 9)
	{
		while (x >= 10)
		{
			z = z * 10;
			x = x / 10;
		}
		_putchar((y / z) + '0');
		z = z / 10;

		for (i = z; i >= 1; i = i / 10)
			_putchar((y / i) % 10 + '0');
	}
	else
		_putchar(x + '0');
}

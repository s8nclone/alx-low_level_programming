#include "main.h"

/**
 * times_table - function name to call
 *
 * Description: prints the 9 times table
 * i = number, n = multiply, p = product
 * Return: Always 0
 */
void times_table(void)
{
	int i, n, p;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for ( n = 1; n <= 9; n++);
		{
			_putchar(',');
			_putchar(' ');

			p = i * n;

			if (p <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + '0');
			}
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}

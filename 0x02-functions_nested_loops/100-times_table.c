#include "main.h"

/**
 * print_times_table - function name
 *
 * Description: prints the n times table
 * starting with 0
 *
 * @n : number parameter
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int a = 0, b, ptt;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++);
		{
			ptt = a * b;
			if (b == 0)
			{
				_putchar('0' + ptt);
			}
			else if (ptt < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + ptt);
			}
			else if
			{
				_putchar(' ');
				_putchar('0' + ptt / 10);
				_putchar('0' + ptt % 10);
			}
			else
			{
				_putchar('0' + ptt / 100);
				_putchar('0' + (ptt - 100) / 10);
				_putchar('0' + ptt % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}

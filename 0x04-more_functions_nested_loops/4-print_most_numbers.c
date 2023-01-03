#include "main.h"

/**
 * print_most_numbers - function name
 *
 * Description: prints the numbers 0 - 9 
 * followed by a new line
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}

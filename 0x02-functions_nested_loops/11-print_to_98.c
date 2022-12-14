#include "main.h"

/**
 * print_to_98 - function name
 *
 * Description: prints all natural numbers from n to 98
 * 
 * @n : numberr to start print
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			_putchar(i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			_putchar(i);
		}
	}
	_putchar("\n");
}

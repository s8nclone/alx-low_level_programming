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
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar(n);
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			_putchar(n);
			n++;
		}
	}
}

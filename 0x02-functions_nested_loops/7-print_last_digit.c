#include "main.h"

/**
 * print_last_digit - function name
 *
 * Description: prints the last digit of a number
 *
 * @n : parameter to be checked
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int i;
	
	i = n % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}

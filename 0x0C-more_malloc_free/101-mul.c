#include "main.h"
#include <stdlib.h>

/**
 * _puts - function
 * @str: pointer to str
 *
 * Description: prints a string
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - function
 * @s: char type str
 *
 * Description: converts str to int
 *
 * Return: int
 */

int _atoi(const char *s)
{
	int sn = 1;
	unsigned long int rp = 0, fnum, i;

	for (fnum = 0; !(s[fnum] >= 48 && s[fnum] <= 57); fnum++)
	{
		if (s[fnum] == '-')
		{
			sn *= -1;
		}
	}
	for (i = fnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		rp *= 10;
		rp += (s[i] - 48);
	}

	return (sn * rp);
}


/**
 * print_int - function
 * @n: int
 *
 * Description: prints an int
 *
 * Return: Always 0
 */

void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, rp;

	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		rp = n / div;
		_putchar('0' + rp);
	}
}


/**
 * main - function
 * @argc: int
 * @argv: list
 *
 * Description: print the result of the multiplication
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}

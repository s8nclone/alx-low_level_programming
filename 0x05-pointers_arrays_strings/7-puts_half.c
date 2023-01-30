#include "main.h"

/**
 * puts_half - function
 * @str: pointer to string
 *
 * Description: prints half of a string
 * followed by a new line
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int n = 0;
	int i = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 1)
	{
		i = (n - 1) / 2;
		i = n - 1;
	}
	else
	{
		i = (n + 1) / 2;
	}

	for (; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

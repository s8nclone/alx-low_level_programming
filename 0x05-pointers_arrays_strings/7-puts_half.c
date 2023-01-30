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

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		n = (i - 1) / 2;
		n = i - 1;
	}
	else
	{
		n = (i + 1) / 2;
	}

	for (; str[n]; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

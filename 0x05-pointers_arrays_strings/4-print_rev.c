#include "main.h"

/**
 * print_rev - function
 * @s: pointer to value address
 *
 * Description: prints string in reverse followed
 * by new line
 *
 * Retrun: Always 0
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c])
	{
		c++;
	}

	c--;

	for (; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}

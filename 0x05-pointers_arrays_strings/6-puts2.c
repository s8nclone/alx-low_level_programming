#include "main.h"

/**
 * puts2 - function
 * @str: pointer to string
 *
 * Description: prints every other character of a string
 * starting with the first character, followed
 * by a new line
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}

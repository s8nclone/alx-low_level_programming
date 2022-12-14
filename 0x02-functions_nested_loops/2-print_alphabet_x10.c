#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints 10 times the alphabet in
 * lowercase and a new line
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char i;
	int n;

	for (i = 'a'; i <= 'z'; i++)
	{
		for ( i = 1; i <= 10; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

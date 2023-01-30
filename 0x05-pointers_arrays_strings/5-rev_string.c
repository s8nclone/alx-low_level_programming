#include "main.h"

/**
 * rev_string - function
 * @s: pointer to value address
 *
 * Description: reverses a string
 *
 * Return: Always 0
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (s[b])
	{
		b++;
	}

	b = b - 1;

	while (a < b + 1 / 2)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;

		b--;
		a++;
	}
}

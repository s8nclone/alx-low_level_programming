#include "main.h"

/**
 * *_memset - function name
 * @s: pointer to constant
 * @b: constant byte
 * @n: max bytes
 *
 * Description: fills memory area with a constant byte
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"

/**
 * binary_to_uint - function
 * @b: pointer to strin of 0 and 1 chars
 *
 * Description: converts a binary number to an unsigned int
 *
 * Return: converted number or
 * 0 if b is NULL or doesn't contai 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
	{
		num <<= 1;
		if (b[len] == '1')
			num += 1;
	}
	return (num);
}

#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function
 * @b: pointer to string of 0 and 1 chars
 *
 * Description: converts a binary number to an unsigned int
 *
 * Return: converted number or
 * 0 if b is NULL or doesn't contai 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}

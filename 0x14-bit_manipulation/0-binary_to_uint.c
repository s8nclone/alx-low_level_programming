#include "main.h"
#include <stdlib.h>

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
	int len = 0, i;

	if (b == NULL)
		return (num);

	while (b[len] != '\0')
		len++;
	len -= 1;

	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (num);

		if (b[i] == '1')
			num += (1 * (1 << len));
		i++;
		len--;
	}

	return (num);
}

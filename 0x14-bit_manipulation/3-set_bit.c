#include "main.h"

/**
 * set_bit - function
 * @n: num
 * @index: index
 *
 * Description: sets value of a bit to 1 at given index
 *
 * Return: 1 if worked or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}

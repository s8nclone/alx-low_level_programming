#include "main.h"

/**
 * clear_bit - function
 * @n: num
 * @index: index starting from 0
 *
 * Description: sets value of a bit to 0 at given index
 *
 * Return: 1 if it worked, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}

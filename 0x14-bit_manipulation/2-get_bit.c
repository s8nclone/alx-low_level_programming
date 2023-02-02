#include "main.h"

/**
 * get_bit - function
 * @n: num
 * @index: index
 *
 * Description: returns the value of a bit at a given index
 *
 * Return: value of bit at index x or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}

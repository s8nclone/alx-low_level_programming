#include "main.h"

/**
 * flip_bits - function
 * @n: num1
 * @m: num2
 *
 * Description: returns the number of bits you would need
 * to flip to get from one number to another
 *
 * Return: no of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

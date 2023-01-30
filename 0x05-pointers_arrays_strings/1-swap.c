#include "main.h"

/**
 * swap_int - function
 * @a: pointer to value
 * @b: pointer to value
 *
 * Description: swaps the values of two int
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

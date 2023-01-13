#include "main.h"
#include <stdlib.h>

/**
 * array_range - function name
 * @min: starting int
 * @max: max int
 *
 * Description: creates an array of int
 *
 * Return: array of int
 */

int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}

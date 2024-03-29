#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function
 * @array: array of int
 * @size: size of array
 * @cmp: pointer to function
 *
 * Description: searches for an int
 *
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function name
 * @b: number of bytes to be allocated
 *
 * Description: allocated memory using malloc
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

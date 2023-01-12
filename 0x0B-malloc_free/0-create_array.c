#include "main.h"

/**
 * *create_array - function name
 * @size: size of array
 * @c: char to initialize
 *
 * Description: creates an array of chars and
 * initializes it with a specific char
 *
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(char) * size);

	if (size == 0 || str == 0)
	{
		return (0);
	}

	while (size--)
	{
		str[size] = c;
	}
	return (str);
}

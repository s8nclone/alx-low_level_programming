#include "main.h"

/**
 * string_toupper - entry point function
 * @s: string
 *
 * Description: function that changes all lowercase
 * letters of a string to uppercase
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
	}
	return (s);
}

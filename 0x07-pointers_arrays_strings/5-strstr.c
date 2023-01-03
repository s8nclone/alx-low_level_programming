#include "main.h"

/**
 * *_strstr - function name
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Description: locates a substring
 *
 * Return: pointer to the beginning of located string
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while(*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}

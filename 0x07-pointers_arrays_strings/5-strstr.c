#include "main.h"
#define NULL 0

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
	while (haystack)
	{
		while (needle)
		{
			if (haystack == needle)
			{
				needle++;
				haystack++;
			}
			else
				break;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}

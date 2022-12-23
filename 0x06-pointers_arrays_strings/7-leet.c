#include "main.h"

/**
 * leet - entry function
 * @c: char to encode
 *
 * Description: encodes a string into 1337
 *
 * Return: encoded string
 */
char *leet(char *c)
{
	int i = 0, j;
	char sub[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (c[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == str[j])
			{
				c[i] = sub[j];
			}
		}
		i++;
	}
	return (c);
}

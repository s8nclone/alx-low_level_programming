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
	int i, j;
	char lett[] = "aeotl";
	char up_lett[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (c[i] == lett[j] || c[i] == up_lett[j])
			{
				c[i] == num[j];
			}
		}
	}
	return (c);
}

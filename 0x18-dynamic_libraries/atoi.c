#include "main.h"

/**
 * _atoi - function
 * @s: pointer to string
 *
 * Description: converts strin to integer
 *
 * Return: Always 0
 */

int _atoi(char *s)
{
	unsigned int i = 0, z = 0, l = 0;
	unsigned int h = 1, k = 1, n;

	while (s[i] != '\0')
	{
		if (z > 0 && (s[i] < '0' || s[i] > '9'))
		{
			break;
		}

		if (s[i] == '-')
		{
			h *= -1;
		}

		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			if (z > 0)
			{
				k *= 10;
			}
			z++;
		}
		i++;
	}

	for (n = i - z; n < i; n++)
	{
		l = l + ((s[n] - 48) * k);
		k /= 10;
	}

	return (l * h);
}

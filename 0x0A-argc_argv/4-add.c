#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _intcheck - function
 * @n: char to check
 *
 * Description: checks if a character is int
 *
 * Return: Always 0
 */

int _intcheck(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] < '0' || n[i] > '9')
		{
			return (-1);
		}
		i++;
	}
	return (0);
}


/**
 * main - function
 * @argc: int
 * @argv: list
 *
 * Description: adds positive numbers
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	sum = 0;
	for (a = 1; a < argc; a++)
	{
		b = _intcheck(argv[a]);
		if (b == -1)
		{
			printf("error\n");
			return (1);
		}
		sum += b;
	}
	printf("%d\n", sum);
	return (0);
}

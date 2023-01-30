#include "main.h"
#include <stdio.h>

/**
 * print_array - function
 * @a: pointer to array to print
 * @n: array length
 *
 * Description: prints n elements of an array of
 * integers, followed by a new line
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

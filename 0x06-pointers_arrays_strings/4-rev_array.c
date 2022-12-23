#include "main.h"

/**
 * reverse_array - entry point function
 * @a: array of integers
 * @n: number of elements
 *
 * Description: a function that reverses the content
 * of an array of integers
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int t;

	while (i < n--)
	{
		t = a[i];
		a[i++] = a[n];
		a[n] = t;
	}
}

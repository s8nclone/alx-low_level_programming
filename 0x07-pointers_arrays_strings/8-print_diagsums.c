#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function name
 * @a: 2d array of int
 * @size: size of the matrix
 *
 * Description: prints the sum of two diagonals of
 * a square matrix of integers
 *
 * Return: array
 */

void print_diagsums(int *a, int size)
{
	int i, sc = 0, sr = 0;

	for (i = 0; i < size; i++)
	{
		sc += a[i];
		sr += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", sc, sr);
}

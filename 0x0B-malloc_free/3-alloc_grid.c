#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function name
 * @width: int
 * @height: int
 *
 * Description: returns a pointer to a 2 dimensional
 * array of int
 *
 * Return: Always 0
 */

int **alloc_grid(int width, int height)
{
	int **tag, i, j;

	tag = malloc(sizeof(*tag) * height);

	if (width <= 0 || height <= 0 || tag == 0)
		return (NULL);

	else
	{
		for (i = 0; i < height; i++)
		{
			tag[i] = malloc(sizeof(**tag) * width);
			if (tag[i] == 0)
			{
				while (i--)
				{
					free(tag[i]);
				}
				free(tag);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				tag[i][j] = 0;
		}
	}
	return (tag);
}

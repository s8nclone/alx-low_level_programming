#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: grid of memories
 * @height: int
 *
 * Description: free grid
 *
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

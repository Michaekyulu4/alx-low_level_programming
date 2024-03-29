#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A function that frees 2 dimensional arrays
 * @grid: Multidemensional array of integers
 * @height: Height of the grid
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

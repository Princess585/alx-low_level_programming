#include "main.h"

/**
 * free_grid - Function that frees a two dimension grid
 * @grid: Pointer to array
 * @height: Row number
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}

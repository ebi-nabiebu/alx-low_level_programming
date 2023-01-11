#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function frees a 2 dimensional grid...
 * ...previously created by your alloc_grid function.
 *
 * @grid: Grid
 * @height: Grid Height.
 */
void free_grid(int **grid, int height)
{
	int eb;

	for (eb = 0; eb < height; eb++)
		free(grid[eb]);
	free(grid);
}

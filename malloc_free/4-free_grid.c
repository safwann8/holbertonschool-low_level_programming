#include "main.h"
#include <stdlib.h>

/**
 * free_grid - libère la mémoire allouée pour une grille 2D
 * @grid: pointeur vers le tableau 2D à libérer
 * @height: nombre de lignes de la grille
 *
 * Description: Cette fonction libère chaque ligne de la grille
 *              précédemment allouée par alloc_grid, puis libère
 *              le tableau principal de pointeurs. Cela permet
 *              d’éviter les fuites mémoire.
 *
 * Return: Rien (void)
 */
void free_grid(int **grid, int height)
{
	int row;

	if (grid == NULL)
		return;

	for (row = 0; row < height; row++)
	{
		if (grid[row] != NULL)
			free(grid[row]);
	}

	free(grid);
}

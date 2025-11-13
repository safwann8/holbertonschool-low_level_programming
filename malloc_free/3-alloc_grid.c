#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - alloue une grille (tableau 2D) d'entiers initialisée à 0
 * @width: nombre de colonnes
 * @height: nombre de lignes
 *
 * Description: crée dynamiquement un tableau de pointeurs vers des lignes,
 *              puis pour chaque ligne alloue un tableau
 *              d'entiers initialisé à 0.
 *              Si width ou height <= 0 ou si malloc échoue, retourne NULL.
 *
 * Return: pointeur vers le tableau 2D (int **), ou NULL si erreur
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col;

	if (width <= 0)
	return (NULL);

	if (height <= 0)
	return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			for (col = 0; col < row; col++)
			free(grid[col]);
			free(grid);
			return (NULL);
		}

		for (col = 0; col < width; col++)
		grid[row][col] = 0;
	}

	return (grid);
}

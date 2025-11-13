#include "main.h"
#include <stdlib.h>

/**
 * Ce programme teste la fonction alloc_grid qui crée un tableau
 * à deux dimensions (une grille) d'entiers.
 *
 * La fonction main commence par appeler alloc_grid(6, 4)
 * pour créer une grille composée de 4 lignes et 6 colonnes.
 * 
 * La fonction alloc_grid doit :
 * - Allouer dynamiquement la mémoire nécessaire pour stocker
 *   un tableau d'entiers de 4 lignes sur 6 colonnes.
 * - Initialiser chaque élément de la grille à 0.
 * - Retourner NULL si la largeur ou la hauteur est inférieure
 *   ou égale à 0, ou si l’allocation mémoire échoue.
 *
 * Ensuite, le programme utilise la fonction print_grid()
 * pour afficher le contenu de la grille. 
 * Comme elle vient d’être créée, tous les éléments sont à 0.
 *
 * Puis, deux cases précises de la grille sont modifiées :
 *  - grid[0][3] reçoit la valeur 98
 *  - grid[3][4] reçoit la valeur 402
 *
 * Enfin, la grille est réaffichée, montrant les deux valeurs
 * modifiées tandis que le reste reste à 0.
 *
 * Ce programme permet donc de vérifier que :
 * - la mémoire a bien été allouée pour un tableau à deux dimensions,
 * - les éléments sont bien accessibles et modifiables,
 * - et que la fonction alloc_grid fonctionne correctement.
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0)
	return (NULL);

	if (height <= 0)
	return (NULL);

	int **grid;
	int row, col;

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	return (NULL);

	for (row = 0; row < height - 1; row++)
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

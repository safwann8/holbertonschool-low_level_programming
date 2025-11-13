#include "main.h"
#include <stdlib.h>

/**
 * array_range - crée un tableau d’entiers de min à max inclus
 * @min: première valeur
 * @max: dernière valeur
 *
 * Return: pointeur vers le tableau alloué,
 * ou NULL si min > max ou malloc échoue
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the array to create
 * @c: the character used to initialize the array
 *
 * Description:
 * This function allocates memory for an array of
 * chars of the given size.
 * Each element of the array is initialized
 * with the character 'c'.
 * If size is equal to 0, or if memory allocation
 * fails, the function returns NULL.
 *
 * Return: pointer to the newly created array,
 * or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* 1. Vérifie si la taille est 0 */
	if (size == 0)
		return (NULL);

	/* 2. Allocation de mémoire dynamique */
	array = malloc(sizeof(char) * size);

	/* 3. Vérifie si malloc a échoué */
	if (array == NULL)
		return (NULL);

	/* 4. Initialise chaque élément du tableau avec 'c' */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	/* 5. Retourne le pointeur vers le tableau */
	return (array);
}

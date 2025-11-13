#include "main.h"
#include <stdlib.h>

/**
 * _calloc - alloue un tableau et initialise tous les octets à 0
 * @nmemb: nombre d’éléments
 * @size: taille de chaque élément en octets
 *
 * Description: Simule le comportement de calloc.
 * Retourne NULL si nmemb ou size = 0, ou si malloc échoue.
 *
 * Return: pointeur vers la mémoire allouée initialisée à 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}

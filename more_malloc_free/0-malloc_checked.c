#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire et vérifie si malloc a réussi
 * @b: taille en octets à allouer
 *
 * Description:
 * Cette fonction alloue un bloc de mémoire de taille 'b' octets.
 * Si malloc échoue (renvoie NULL), le programme se termine
 * immédiatement avec un statut de sortie égal à 98.
 *
 * Return: un pointeur vers la mémoire allouée
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
        exit(98);

    return (ptr);
}

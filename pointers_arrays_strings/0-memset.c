#include "main.h"

/**
 * _memset - Remplit une zone mémoire avec une valeur constante.
 * @s: Pointeur vers la zone mémoire à remplir.
 * @b: Valeur (byte) utilisée pour remplir la mémoire.
 * @n: Nombre d’octets à remplir dans la zone mémoire.
 *
 * Description: Cette fonction remplit les n premiers octets de la zone
 * mémoire pointée par @s avec la valeur constante @b. 
 * Elle retourne un pointeur vers la zone mémoire @s.
 *
 * Return: Un pointeur vers la mémoire remplie (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

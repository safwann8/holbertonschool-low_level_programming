#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatène deux chaînes de caractères
 * @s1: première chaîne
 * @s2: deuxième chaîne
 * @n: nombre de caractères de s2 à ajouter à s1
 *
 * Description: Alloue dynamiquement une nouvelle chaîne contenant s1,
 * suivie des n premiers caractères de
 * s2 (ou toute s2 si n >= longueur de s2).
 * Si s1 ou s2 vaut NULL, ils sont traités comme des chaînes vides.
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si échec de malloc
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly
 * allocated memory space
 * @s1: the first string
 * @s2: the second string
 *
 * Description:
 * This function creates a new string that contains
 * the contents of s1,
 * followed by the contents of s2. The function
 * allocates enough memory
 * to store both strings and the terminating
 * null byte.
 * If either s1 or s2 is NULL, they are treated
 * as empty strings.
 * If memory allocation fails, the function
 * returns NULL.
 *
 * Return: pointer to the newly created
 * concatenated string,
 * or NULL on failure
 */


char *str_concat(char *s1, char *s2)
{
	char *concat;
	int P = 0;
	int Q = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[i] != '\0')
	i++;

	while (s2[j] != '\0')
	j++;

	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
	return (NULL);

	while (s1[P] != '\0')
	{
		concat[k] = s1[P];
		P++;
		k++;
	}

	while (s2[Q] != '\0')
	{
		concat[k] = s2[Q];
		Q++;
		k++;
	}
	return (concat);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - additionne des nombres positifs passés en arguments
 * @argc: nombre d'arguments passés au programme
 * @argv: tableau contenant les arguments sous forme de chaînes
 *
 * Return: 0 si succès, 1 si erreur (argument invalide)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/* Si aucun argument n'est passé, afficher 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Parcourt chaque argument */
	for (i = 1; i < argc; i++)
	{
		/* Vérifie que chaque caractère de l'argument est un chiffre */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Convertit et additionne l'argument */
		sum += atoi(argv[i]);
	}

	/* Affiche la somme totale */
	printf("%d\n", sum);
	return (0);
}

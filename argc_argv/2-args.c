#include "main.h"
#include <stdio.h>

/**
 * main - affiche tous les arguments reçus par le programme
 * @argc: nombre total d'arguments passés en ligne de commande
 * @argv: tableau contenant les arguments sous forme de chaînes de caractères
 *
 * Description:
 * Ce programme affiche **tous les arguments**
 * passés au moment de l’exécution,
 * y compris le nom du programme lui-même.
 *
 * Chaque argument est affiché sur une ligne séparée.
 *
 * Par exemple :
 *   - Si on exécute : ./args
 *       -> affiche :
 *          ./args
 *
 *   - Si on exécute : ./args Hello World
 *       -> affiche :
 *          ./args
 *          Hello
 *          World
 *
 * Le programme utilise une boucle pour parcourir le tableau `argv`
 * depuis `argv[0]` jusqu’à `argv[argc - 1]`, et affiche chaque élément
 * suivi d’un saut de ligne (`\n`).
 *
 * Return: Toujours 0 (succès)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

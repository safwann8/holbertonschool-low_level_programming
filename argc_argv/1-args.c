#include "main.h"
#include <stdio.h>

/**
 * main - affiche le nombre d'arguments passés au programme
 * @argc: nombre total d'arguments passés en ligne de commande
 * @argv: tableau contenant les arguments sous forme
 * de chaînes de caractères
 *
 * Description:
 * Ce programme affiche le nombre d'arguments que l'utilisateur a passés
 * au moment de l'exécution, sans compter le nom du programme lui-même.
 *
 * Par exemple :
 *   - Si on exécute : ./nargs
 *       -> argc vaut 1, donc le programme affiche 0.
 *   - Si on exécute : ./nargs hello world
 *       -> argc vaut 3, donc le programme affiche 2.
 *
 * Le programme affiche simplement ce nombre suivi
 * d’un saut de ligne.
 *
 * Return: Toujours 0 (succès)
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}

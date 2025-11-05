#include <stdio.h>

/**
 * main - affiche le nom du programme
 * @argc: nombre d'arguments (inutile ici)
 * @argv: tableau des arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;  /* évite le warning si argc n'est pas utilisé */
	printf("%s\n", argv[0]);
	return (0);
}

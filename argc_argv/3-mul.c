#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie deux nombres passés en arguments
 * @argc: nombre total d'arguments passés au programme
 * @argv: tableau contenant les arguments sous forme de chaînes de caractères
 *
 * Description:
 * Ce programme prend exactement deux arguments en ligne de commande,
 * les convertit en entiers, puis affiche le résultat de leur multiplication.
 *
 * - Si le programme reçoit **exactement deux arguments** :
 *     il les convertit avec `atoi()` et affiche leur produit suivi d’un saut de ligne.
 *
 * - Si le programme ne reçoit **pas deux arguments** :
 *     il affiche "Error" suivi d’un saut de ligne et retourne 1.
 *
 * Exemples :
 *   - ./mul 2 3        → affiche 6
 *   - ./mul 2 -3       → affiche -6
 *   - ./mul 245 3245342 → affiche 795108790
 *   - ./mul             → affiche "Error"
 *
 * Return:
 *   - 0 en cas de succès
 *   - 1 en cas d’erreur (nombre d’arguments incorrect)
 */

int main(int argc, char *argv[])
{
    int a, b, result;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    result = a * b;

    printf("%d\n", result);
    return (0);
}

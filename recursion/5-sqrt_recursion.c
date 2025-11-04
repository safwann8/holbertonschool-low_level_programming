#include "main.h"

/**
 * _sqrt_recursion - calcule la racine carrée naturelle d'un nombre
 * @n: nombre dont on cherche la racine carrée
 *
 * Description:
 * Cette fonction retourne la racine carrée entière (naturelle) de n en utilisant la récursion.
 * - Si n est négatif, elle retourne -1.
 * - Si n n'a pas de racine carrée naturelle (i.e., aucun entier i tel que i*i == n),
 *   elle retourne -1.
 * - Sinon, elle retourne l'entier i tel que i*i == n.
 * 
 * Return: racine carrée naturelle de n, ou -1 si n n'a pas de racine naturelle
 */

int _sqrt_recursion(int n)
{
    int i = n;

    if (n < 0)
    {
        return (-1);
    }

    else if (i * i == n)
    {
        return (-1);
    }

    else
    {
        return (_sqrt_helper(n, 0));
    }
}


int _sqrt_helper(int n, int i)
{
    if (i * i > n)
        return (-1);
    else if (i * i == n)
        return (i);
    else
        return _sqrt_helper(n, i + 1);
}

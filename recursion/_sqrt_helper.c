#include "main.h"

/**
 * _sqrt_helper - fonction récursive qui teste les entiers pour trouver la racine
 * @n: nombre dont on cherche la racine carrée
 * @i: entier courant à tester
 *
 * Return: racine carrée naturelle de n ou -1 si pas de racine
 */
 
int _sqrt_helper(int n, int i)
{
    if (i * i > n)
        return -1;
    else if (i * i == n)
        return i;
    else
        return _sqrt_helper(n, i + 1);
}

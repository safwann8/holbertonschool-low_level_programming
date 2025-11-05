#include "main.h"

/**
 * _sqrt_helper - cherche récursivement la racine carrée naturelle d'un nombre
 * @n: le nombre dont on cherche la racine
 * @i: le candidat actuel pour la racine
 *
 * Return: la racine carrée naturelle, ou -1 si elle n'existe pas
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - calcule la racine carrée naturelle d'un nombre
 * @n: nombre dont on cherche la racine
 *
 * Return: la racine carrée naturelle, ou -1 si elle n'existe pas
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}

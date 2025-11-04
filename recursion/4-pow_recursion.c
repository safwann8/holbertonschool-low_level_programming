#include "main.h"

/**
 * _pow_recursion - calcule la valeur de x élevé à la puissance y
 * @x: base entière
 * @y: exposant entier
 *
 * Description:
 * Cette fonction retourne le résultat de x à la puissance y en utilisant la récursion.
 * - Si y est inférieur à 0, elle retourne -1 pour indiquer une erreur.
 * - Si y est égal à 0, elle retourne 1 (cas de base, car x^0 = 1).
 * - Sinon, elle retourne x multiplié par le résultat de la fonction appelée
 *   avec y - 1 (récursion descendante).
 *
 * Return: le résultat de x^y, ou -1 si y est négatif
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

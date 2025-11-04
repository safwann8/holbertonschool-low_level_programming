#include "main.h"

/**
 * factorial - calcule le factoriel d'un nombre donné
 * @n: nombre dont on veut calculer le factoriel
 *
 * Description:
 * Cette fonction retourne le factoriel du nombre n en utilisant la récursion.
 * - Si n est inférieur à 0, la fonction retourne -1 pour indiquer une erreur.
 * - Si n est égal à 0, le résultat est 1 (cas de base du factoriel).
 * - Sinon, elle retourne n multiplié par le factoriel de (n - 1).
 *
 * Return: le factoriel de n, ou -1 si n est négatif
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}
	
	else
	{
		return (n * factorial(n - 1));
	}
}

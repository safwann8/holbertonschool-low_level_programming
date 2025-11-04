#include "main.h"

/**
 * is_prime_number - détermine si un entier est un nombre premier
 * @n: l'entier à tester
 *
 * Description:
 * Cette fonction retourne 1 si n est un nombre premier, 0 sinon.
 * - Un nombre premier est un entier > 1 qui n'a aucun diviseur autre que 1 et lui-même.
 * - La fonction utilise la récursion pour tester tous les entiers à partir de 2.
 * - Si n est <= 1, la fonction retourne 0.
 *
 * Return: 1 si n est premier, 0 sinon.
 */

int is_prime_number(int n)
{
	int i = n;

	if (n <= 1)
	{
		return (0);
	}

	else if (n % i == 0)
	{
		return (0);
	}

	else
	{
		return (_is_prime_helper(n, 2));
	}
}



int _is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	else if (n % i == 0)
	{
		return (0);
	}

	else
	{
		return (_is_prime_helper(n, i + 1));
	}
}

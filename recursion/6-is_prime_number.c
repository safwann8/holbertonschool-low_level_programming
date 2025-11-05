#include "main.h"

/**
 * _is_prime_helper - aide à déterminer si un nombre est premier
 * @n: nombre à tester
 * @i: diviseur en cours de test
 *
 * Return: 1 si n est premier, 0 sinon
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - détermine si un entier est un nombre premier
 * @n: l'entier à tester
 *
 * Description:
 * Retourne 1 si n est un nombre premier, 0 sinon.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime_helper(n, 2));
}

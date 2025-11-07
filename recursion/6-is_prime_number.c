#include "main.h"

/**
 * is_prime_number - vérifie si un nombre est premier
 * @n: le nombre à tester
 *
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_is_prime_helper(n, 2));
}

/**
 * _is_prime_helper - aide à vérifier si un nombre est premier
 * @n: nombre à tester
 * @i: diviseur courant
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

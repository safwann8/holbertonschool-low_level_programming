#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calcule la somme de tous les paramètres passés
 * @n: Nombre d'arguments à additionner
 *
 * Return: La somme de tous les paramètres,
 * ou 0 si n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}

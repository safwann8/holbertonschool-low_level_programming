#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Affiche des entiers séparés par une chaîne donnée
 * @separator: Chaîne à afficher entre les nombres (peut être NULL)
 * @n: Nombre d'entiers passés à la fonction
 *
 * Description: Cette fonction parcourt tous les entiers passés en paramètres
 * variadiques et les affiche. Si @separator n'est pas NULL, il est affiché
 * entre les nombres. Un retour à la ligne est ajouté à la fin.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int res = 0;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		res = va_arg(ap, int);
		printf("%d", res);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}

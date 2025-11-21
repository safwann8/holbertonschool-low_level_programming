#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Affiche n'importe quel type de paramètre selon format
 * @format: Chaîne qui indique le type des paramètres passés
 *
 * Description:
 * 'c' : char
 * 'i' : int
 * 'f' : float
 * 's' : char * (si NULL, affiche "(nil)")
 * Autres caractères sont ignorés.
 * Les valeurs sont séparées par ", ". Retour à la ligne à la fin.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;
	char *sep = "";

	va_start(ap, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(ap, int));
		if (format[i] == 'i')
			printf("%s%d", sep, va_arg(ap, int));
		if (format[i] == 'f')
			printf("%s%f", sep, va_arg(ap, double));
		if (format[i] == 's')
		{
			str = va_arg(ap, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
		}
		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(ap);
}

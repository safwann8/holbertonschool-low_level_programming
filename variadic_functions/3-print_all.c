#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Affiche un char depuis va_list
 * @ap: liste d'arguments variadiques
 */
static void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - Affiche un int depuis va_list
 * @ap: liste d'arguments variadiques
 */
static void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Affiche un float depuis va_list
 * @ap: liste d'arguments variadiques
 */
static void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - Affiche une string depuis va_list
 * @ap: liste d'arguments variadiques
 */
static void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - Affiche des paramètres variadiques selon le format
 * @format: Chaîne qui indique le type des paramètres ('c', 'i', 'f', 's')
 *
 * Description:
 * - 'c' : char
 * - 'i' : int
 * - 'f' : float
 * - 's' : char * (affiche "(nil)" si NULL)
 * Les autres caractères sont ignorés.
 * Les valeurs sont séparées par ", " et suivi d'un retour à la ligne.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *sep = "";

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if ((format[i] == "cifs"[j]))
			{
				printf("%s", sep);
				if (j == 0)
					print_char(ap);
				else if (j == 1)
					print_int(ap);
				else if (j == 2)
					print_float(ap);
				else
					print_string(ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(ap);
	printf("\n");
}

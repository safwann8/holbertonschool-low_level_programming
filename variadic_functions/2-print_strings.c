#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Affiche des chaînes séparées par une chaîne donnée
 * @separator: Chaîne à afficher entre les chaînes (peut être NULL)
 * @n: Nombre de chaînes passées à la fonction
 *
 * Description: Cette fonction parcourt tous les paramètres variadiques
 * qui sont des chaînes de caractères et les affiche. Si @separator n'est
 * pas NULL, il est affiché entre les chaînes. Si une chaîne est NULL,
 * "(nil)" est affiché à la place. Un retour à la ligne est ajouté à la fin.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;
    char *str;

    va_start(ap, n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(ap, char *);
        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);

        if (i != n - 1 && separator != NULL)
            printf("%s", separator);
    }

    printf("\n");
    va_end(ap);
}

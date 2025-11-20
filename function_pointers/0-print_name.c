#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - imprime un nom en utilisant une fonction pointeur
 * @name: le nom à afficher
 * @f: pointeur vers une fonction qui prend un char * en paramètre
 *
 * Description: Cette fonction vérifie que @name et @f ne sont pas NULL,
 * puis appelle la fonction pointée par @f pour afficher le nom.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}

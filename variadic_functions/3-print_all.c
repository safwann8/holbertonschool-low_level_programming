#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
* struct printer - Structure for printing different types
* @c: The format specifier
* @f: The function pointer to print the type
*/
	typedef struct printer
	{
		char *c;

		void (*f)(va_list);
	} print_t;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/* Fonctions d'impression pour chaque type */
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif
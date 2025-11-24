#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS


#include <stdarg.h>

/**
 * struct print - Struct associating a type char and function pointer
 * @c: type to match
 * @f: function to handle that type
 */
typedef struct print
{
	char *c;
	void (*f)(va_list);
} print_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);


#endif
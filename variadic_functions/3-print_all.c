#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";
	char *str;

	typedef struct printer {
		char t;
		void (*f)(va_list);
	} printer_t;

	void print_char(va_list a) { printf("%c", va_arg(a, int)); }
	void print_int(va_list a) { printf("%d", va_arg(a, int)); }
	void print_float(va_list a) { printf("%f", va_arg(a, double)); }
	void print_string(va_list a)
	{
		str = va_arg(a, char *);
		if (!str)
			str = "(nil)";
		printf("%s", str);
	}

	printer_t funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (funcs[j].t)
		{
			if (funcs[j].t == format[i])
			{
				printf("%s", sep);
				funcs[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

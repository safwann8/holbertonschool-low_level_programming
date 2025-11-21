#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/
 
print_char - Prints a char
@arg: A va_list containing the char to print*/
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/
 
print_int - Prints an int
@arg: A va_list containing the int to print*/
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/
 
print_float - Prints a float
@arg: A va_list containing the float to print*/
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/
 
print_string - Prints a string
@arg: A va_list containing the string to print*/
void print_string(va_list arg)
{
	char str = va_arg(arg, char);

		if (str == NULL)
		{
			printf("(nil)");
			return;
		}
		printf("%s", str);
}

/**
 
print_all - Prints anything based on the format provided
@format: A string of characters representing the argument types
('c' for char, 'i' for int, 'f' for float, 's' for string)*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int j;
	char *separator = "";

	print_t p[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}};

	va_start(args, format);

		while (format && format[i])
		{
			j = 0;
			while (p[j].c)
			{
				if (format[i] == p[j].c[0])
				{
					printf("%s", separator);
					p[j].f(args);
					separator = ", ";
				}
				j++;
			}
			i++;
		}
	printf("\n");
	va_end(args);
}

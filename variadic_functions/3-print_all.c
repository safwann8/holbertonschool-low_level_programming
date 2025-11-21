#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints a variable number of arguments based on a format string.
 * @format: A constant string containing the argument types.
 *
 * Description:
 * This function parses the format string and prints each corresponding
 * argument using the correct conversion:
 *   'c' → char
 *   'i' → integer
 *   'f' → float
 *   's' → string (prints "(nil)" if the string is NULL)
 *
 * Any unknown type specifier is ignored.
 * A comma and a space are printed between valid arguments.
 *
 * The function ends by printing a newline.
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's')
		{
			printf("%s", sep);

			if (format[i] == 'c')
				printf("%c", va_arg(args, int));

			if (format[i] == 'i')
				printf("%d", va_arg(args, int));

			if (format[i] == 'f')
				printf("%f", va_arg(args, double));

			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
			}

			sep = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

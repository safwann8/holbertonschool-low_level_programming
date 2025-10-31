#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Description: This function extracts the first integer found in the string
 * pointed to by @s. It handles multiple '+' and '-' signs before the number,
 * and stops conversion when a non-digit character is encountered after the number.
 * If no digits are found, it returns 0.
 *
 * Return: The integer value of the number found in the string, or 0 if none.
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = (result * 10) + (s[i] - '0');
		}
		else if (started)
		break;

		i++;
	}
	if (sign < 0)
	return (-result);
	return (result);
}

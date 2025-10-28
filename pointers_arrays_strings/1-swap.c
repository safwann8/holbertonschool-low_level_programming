#include "main.h"

/**
 * swap_int - Swaps the values of two integers without using a temporary variable
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Description: This function exchanges the values of *a and *b
 * using only arithmetic operations.
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

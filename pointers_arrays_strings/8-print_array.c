#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array, followed by a new line.
 * @a: Pointer to the array of integers
 * @n: Number of elements to be printed
 *
 * Description: This function prints the first n elements of the array a.
 * The elements are separated by a comma and a space. The output ends
 * with a newline character. Uses printf for formatting.
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		printf(", ");
	}
	printf("\n");
}

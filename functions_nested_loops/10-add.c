#include <stdio.h>
#include "main.h"

/**
 * add - adds two integers and returns the result
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int add(int a, int b)
{
	return a + b;
}

/* Exemple de main pour tester add */
int main(void)
{
	int x = 5;
	int y = 7;
	int result;

	result = add(x, y);
	printf("%d + %d = %d\n", x, y, result);

	return 0;
}

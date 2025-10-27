#include <stdio.h>

/**
 * main - prints numbers from 1 to 100,
 *        but for multiples of 3 prints "Fizz",
 *        for multiples of 5 prints "Buzz",
 *        and for multiples of both 3 and 5 prints "FizzBuzz".
 *
 * Each number or word is separated by a space.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}

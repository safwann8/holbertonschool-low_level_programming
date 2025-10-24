#include <stdio.h>
#include <time.h>
#include <stdlib>

/*
* main - prints the last digit
*
* Return: Always 0 (success)
*/
int main(void)
{
    int n;
    int last digit;

    srand(time(0));
	n = rand() - RAND_MAX / 2;

    printf("last digit of %d is %d", n, last digit);

    if (last digit > 5)
    {
        printf("and is greater than 5\n");
    }
    eslse if (last digit == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    return (0);
}

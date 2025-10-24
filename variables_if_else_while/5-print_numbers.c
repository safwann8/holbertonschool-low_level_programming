#include <stdio.h>
/**
* main - Prints all single digit numbers of base 10 starting from 0
*
* Return: Always 0 (success)
*/
int main(void)
{
    int digit;

    for (digit = 0; digit < 10; digit++)
    {
        printf("%d", digit);
    }

    putchar ('\n');
    return (0);
}

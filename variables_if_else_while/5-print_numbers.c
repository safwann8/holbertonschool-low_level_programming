#include <stdio.h>
/**
* main - Prints all single digit numbers of base 10 starting from 0
*
* Return: Always 0 (success)
*/
int main(void)
{
    for (char digit = '1'; char digit <= '10'; digit++)
    {
        printf("%d", digit);
    }

    putchar ('\n');
    return (0);
}

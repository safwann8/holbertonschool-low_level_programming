#include <stdio.h>
/**
* main - Prints all single digit numbers of base 10 starting from 0
*
* Return: Always 0 (success)
*/
int main(void)
{
    for (char numbers = '1'; char numbers <= '10'; numbers++)
    {
        printf("%d", numbers)
    }

    putchar ('\n');
    return (0);
}

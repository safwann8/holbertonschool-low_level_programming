#include "3-calc.h"

/**
 * op_add - Additionne deux entiers
 * @a: premier entier
 * @b: second entier
 *
 * Return: la somme de a et b
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Soustrait un entier du second
 * @a: premier entier
 * @b: second entier
 *
 * Return: la différence entre a et b
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Multiplie deux entiers
 * @a: premier entier
 * @b: second entier
 *
 * Return: le produit de a et b
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Divise un entier par un autre
 * @a: premier entier
 * @b: second entier
 *
 * Return: le résultat de la division de a par b
 */
int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - Calcule le modulo entre deux entiers
 * @a: premier entier
 * @b: second entier
 *
 * Return: le reste de la division de a par b
 */
int op_mod(int a, int b)
{
    return (a % b);
}

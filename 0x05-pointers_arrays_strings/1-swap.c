#include "main.h"
#include <stdio.h>

/**
 * swap_int- swap values of int
 * @a: pointer to a
 * @b: pointer to b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

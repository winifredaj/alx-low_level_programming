#include "main.h"
#include <stdio.h>

/**
 * rev_string- prints string and reverses it
 * @s: string to print
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k;

	char *a, aux;
	a = s;

	while (s[k] != '\0')
	{
		k++;
	}
	for (i = 1; i < k; i++)
	{
		a++;
	}
	for (j = 0; j < (k / 2); j++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}

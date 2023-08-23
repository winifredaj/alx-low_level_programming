#include "main.h"
#include <stdio.h>

/**
 * rev_string- prints string and reverses it
 * @s: string to print
 * Return: void
 */
void rev_string(char *s)
{
	int i, k, j;
	char *a, aux;

	a = s;
	while (s[k] != '\0')
	{
		k++;
	}
	for (j = 1; j < k; j++)
	{
		a++;
	}
	for (i = 0; i < (k / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}

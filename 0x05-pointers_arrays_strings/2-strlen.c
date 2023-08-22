#include "main.h"
#include <stdio.h>

/**
 * strlen- print lenght of string 
 * @n: string 
 * Return: number of string
 */
int _strlen(char *s)
{
	int n = 0;

	for (; *s != '\0'; s++)
	{
		n++;
	}
	return (n);
}

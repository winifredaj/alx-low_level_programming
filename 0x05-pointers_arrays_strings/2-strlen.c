#include "main.h"
#include <stdio.h>

/**
 * _strlen- print length of string
 * @s: string to count
 * 
 * Return: string length
 */
int _strlen(char *s)
{
	int n;

	for (; *s != '\0'; s++)
	{
		n++;
	}
	return (n);
}

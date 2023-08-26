#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings
 * @dest: the destination string
 * @src: the source string
 * @n: limit of concantenation
 *
 * Return: nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}

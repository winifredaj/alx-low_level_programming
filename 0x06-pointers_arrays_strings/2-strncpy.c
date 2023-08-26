#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy strings
 * @dest: the destination string
 * @src: the source string
 * @n: copy limit
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (src[b])
	{
		b++;
	}
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		des[a] = '\0';
		a++;
	}
	return (dest);
}

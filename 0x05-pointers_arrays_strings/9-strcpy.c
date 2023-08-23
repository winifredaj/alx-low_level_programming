#include "main.h"
#include <stdio.h>

/**
 * _strcpy- copies string
 * @dest: strind in the destination
 * @src: string in the source
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}

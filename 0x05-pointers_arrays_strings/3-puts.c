#include "main.h"
#include <stdio.h>

/**
 * _puts- prints string
 * @str: string to print
 * Return: string length
 */
void _puts(char *str)
{
	for (; *str != '\0'; *str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

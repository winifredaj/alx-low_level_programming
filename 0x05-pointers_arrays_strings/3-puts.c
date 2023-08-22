#include "main.h"
#include <stdio.h>

/**
 * _puts- prints string
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

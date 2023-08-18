#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;

	for (i >= 48; i <= 57; i++)
	{
		print_numbers(i);
	}
	_putchar('\n');
	return (0);
}

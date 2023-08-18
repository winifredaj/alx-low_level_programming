#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	while (n >= 1)
	{
		_putchar('\\');
		_putchar(' ');
		n++;
		_putchar('\n');
	}
	_putchar('\n');
}

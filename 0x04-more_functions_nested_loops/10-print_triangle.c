#include "main.h"

/**
 * print_triangle - print triangle using #
 * @size: size of triangle tobe printed
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j; 

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = i; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1);
		_putchar('\n');
}

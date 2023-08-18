#include "main.h"

/**
 * print_diagonal- print diagonal line
 * @n: character used to print line
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;
	
	for (i = 1; i <=  n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}

#include "main.h"

/**
 * print_line - check the code
 * @n: number of lines to print
 * Return: Always 0.
 */
void print_line(int n)
{
	while (n >= 1)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}

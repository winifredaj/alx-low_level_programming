#include "main.h"
/**
 * print_square - print square
 * @size: print square size
 * Return: Always 0.
 */
void print_square(int size)
{
	int x, y;
      
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}

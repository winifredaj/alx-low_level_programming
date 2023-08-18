#include "main.h"

/**
 * print_most_numbers - prints the number
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		_putchar(i);
	}
	_putchar('\n');
}

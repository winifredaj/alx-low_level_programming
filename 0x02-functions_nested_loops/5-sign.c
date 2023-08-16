#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints sign of n for each case
 *
 * @n: character to be checked for what sign n is
 *
 *Return: one if n is positive, minus one if negative, otherwise zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}
}

#include <stdio.h>
#include "main.h"
/**
 * print_last_digit- prints last digit of an integer
 *
 * @n: character to checck for last digit
 *
 *Return: last digit of n
 */
int print_last_digit(int n)
{
	n = n % 10;
	
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}

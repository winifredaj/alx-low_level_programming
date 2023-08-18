#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if c is a digit
 * @c: character to be tested
 *
 * Return: Always 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if intteger is upper case.
 * @c: character passed to test function
 * Return: 1 if C is upper case , otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

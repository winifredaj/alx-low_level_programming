#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for both lower case and uppercase
 *
 * @c: character to be checked if it is an alphabet
 *
 *Return: one if it is an alphabet, otherwise zero
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) | (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

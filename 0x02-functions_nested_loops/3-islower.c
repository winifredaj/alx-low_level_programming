#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase
 *
 * c - character to be checked if lowercase is present
 *
 * Return: one if lowercase, otherwise zero
 *
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

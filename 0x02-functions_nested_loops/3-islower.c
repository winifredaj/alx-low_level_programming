#include <stdio.h>
#include "main.h"
/**
 * main - checks code
 *
 * Return: one if lowercase, otherwise zero
 * int_islower(int c) - checks for lowercase
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

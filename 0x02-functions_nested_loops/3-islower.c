#include <stdio.h>
#include "main.h"
/**
 * main - checks code
 *
 * Return: one if lowercase, otherwise zero
 */
int main (void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	putchar('\n');
}
/**
 * int_islower(int c) - checks for lowercase
 *
 */
int _islower(int c)
{
	if ((lowerCase >= 97) && (lowerCase <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

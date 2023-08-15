#include <stdio.h>
#include "main.h"
/**
 * main -prints function
 *
 * Return: zero on success
 *
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
}

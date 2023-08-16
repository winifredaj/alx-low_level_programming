#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints lower case alphabet
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
/**
 * print_alphabet_x10 - prints lower case alphabet ten times
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		print_alphabet(i);
	}
}

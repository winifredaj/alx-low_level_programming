#include <stdio.h>
#include "main.h"
/**
 *
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
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9;  i++)
	{
		putchar(i);
	}
	return (0);
}

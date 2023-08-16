#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints lower case alphabet
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

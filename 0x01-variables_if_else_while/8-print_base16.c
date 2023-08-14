#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -prints all numbers of  base16 in lowercase digits
 *
 * Return: zero on success
 *
 */
int main(void)
{
	int hex;

	for (hex = 48; hex <= 57; hex++)
	{
		putchar(hex);
	}
	for (hex = 97; hex <= 101; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}

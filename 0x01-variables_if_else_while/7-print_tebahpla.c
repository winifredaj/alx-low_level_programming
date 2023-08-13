#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -prints alphabet in reverse
 *
 * Return: zero on success
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

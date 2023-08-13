#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -prints function
 *
 * Return: zero on success
 *
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e')
		{
		alphabet++;
		}
		else if (alphabet == 'q')
		{
		alphabet++;
		}
		else
		{
		putchar(alphabet);
		alphabet++;
		}
	}
	putchar('\n');
	return (0);
}

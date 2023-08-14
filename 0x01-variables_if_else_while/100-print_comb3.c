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
	int x, y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			if ((x < y ) && (y <= 57))
			{
				putchar(x);
				putchar(y);
			}
			if ((y < 57) | (x < 58))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

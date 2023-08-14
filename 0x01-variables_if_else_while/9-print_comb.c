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
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num < 57) 
		{
			putchar(num ',');
			putchar(' ');
		}
		else
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

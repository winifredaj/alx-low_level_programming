#include <stdio.h>
#include "main.h"
/**
 * main - prints fizzbuzz numbers
 *
 *Return: one if it is an alphabet, otherwise zero
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0) && (x % 5 == 0)
		{
			printf('FizzBuzz');
		}
		else if (x % 5 == 0)
		{
			printf('Buzz');
		}
		else if (x % 3 == 0)
		{
			printf('Fizz');
		}
		else
			printf(%d, x);
		_putchar(' ');
	}
	_putchar('\n');
}

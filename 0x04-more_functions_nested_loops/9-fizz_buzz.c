#include <stdio.h>
#include "main.h"
/**
 * main - prints fizzbuzz numbers
 * Description: Write a program that prints the numbers from 1 to 100
 * Return: one if it is an alphabet, otherwise zero
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0) && (x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
			printf("%d", x);
	}
	printf("Buzz\n");
	return (0);
}

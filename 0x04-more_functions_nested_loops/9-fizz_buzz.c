#include <stdio.h>
#include "main.h"
/**
 * main - prints fizzbuzz numbers
 * Description: Write a program that prints the numbers from 1 to 100
 * Return: zero
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", x);
	}
	printf("Buzz\n");
	return (0);
}

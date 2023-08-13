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
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	       	printf("%d is positive \n");
	}
	else if (n < 0) 
	{
		printf("is negative \n");
	}
	else 
	{
		printf("is zero \n");
	}
	return 0;
}

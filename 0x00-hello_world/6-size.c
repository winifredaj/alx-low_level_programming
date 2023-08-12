#include <stdio.h>
/**
 * main- prints on quote
 *
 * Return: zero on success
 *
 */
int main(void)
{
	char c;
	int i;
	long int d;
	long long int l; 
	float f;

	printf ("Size of a char: %lu.\n",(unsigned long)sizeof(c),"byte(s)");
	printf ("Size of an int: %lu.\n",(unsigned long)sizeof(i));
	printf ("size of a long int: %lu.\n",(unsigned long)sizeof(d));
	printf ("Size of a long long int: %lu.\n",(unsigned long)sizeof(l));
	printf ("Size of a float: %lu.\n",(unsigned long)sizeof(f));

	return(0);
}

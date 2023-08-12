#include <stdio.h>
/**
 * main- prints on quote
 *
 * return: zero on success
 *
 */
int main(void)
{
	char c;
	int i;
	long int d;
	long long int l; 
	float f;

	printf ("size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf ("size of a int: %lu.\n", (unsigned long)sizeof(i));
	printf ("size of a long int: %lu.\n", (unsigned long)sizeof(d));
	printf ("size of a long long int: %lu.\n", (unsigned long)sizeof(l));
	printf ("size of a float: %lu.\n", (unsigned long)sizeof(f));

	return(0);
}

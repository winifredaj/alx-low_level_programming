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
	char Alphabet = 'A';
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (Alphabet ='A'; Alphabet <= 'Z'; Alphabet++)
		putchar(Alphabet);
	return (0);

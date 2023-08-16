#include <stdio.h>
#include "main.h"
/**
 * int_abs - computes absolute integer
 *
 * @n: character to be change to absolute integr
 *
 *Return: n if integer absolute, otherwise -n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}

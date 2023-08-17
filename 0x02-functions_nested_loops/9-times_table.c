#include <stdio.h>
#include "main.h"
/**
 * times_table- print times table up till nine
 *
 *Return: void
 */
void times_table(void)
{
	int x, y, mul;

	mul = 0;
	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			mul = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mul >= 0)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else if ((mul < 10) && (y != 0))
			{
				_putchar(' ');
				_putchar((mul % 10) + '0');
			}
			else
				_putchar((mul % 10) + '0')
		}
		_putchar('\n');
	}
}

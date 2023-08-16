#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints time
 *
 * @hr: value of time is stored
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int hr;
	int min;
	
	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			putchar((hr / 10) + '0');
			putchar((hr % 10) + '0');
			putchar(':');
			putchar((min / 10) + '0');
			putchar((min % 10) + '0');
			putchar('\n');
		}
	}
}

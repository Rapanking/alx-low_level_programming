#include "main.h"

/**
 * jack_bauer -  a function that prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int Ho, ho, Min, min;

	for (Ho = 0; Ho <= 2; Ho++)
	{
		for (ho = 0; ho <= 9; ho++)
		{
			for (Min = 0; Min <= 5; Min++)
			{
				for (min = 0; min <= 9; min++)
				{
					if (!((Ho == 2) && (ho > 3)))
					{
						_putchar ('0' + Ho);
						_putchar ('0' + ho);
						_putchar (':');
						_putchar ('0' + Min);
						_putchar ('0' + min);
						_putchar ('\n');
					}
				}
			}
		}
	}
}

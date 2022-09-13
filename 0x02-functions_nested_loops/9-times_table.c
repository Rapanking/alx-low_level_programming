#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int num, mul, res, x, y;

	for (num = 0; num <= 9; num++)
	{
		for (mul = 0; num <= 9; num++)
		{
			res = num * mul;
			if (res > 9)
			{
				x = res % 10;
				y = (res - x) / 10;
				_putchar (44);
				_putchar (32);
				_putchar (y + '0');
				_putchar (x + '0');
			}
			else
			{
				if (mul != 0)
				{
					_putchar (44);
					_putchar (32);
					_putchar (32);
				}
				_putchar (res + '0');
			}
		}
		_putchar ('\n');
	}
}

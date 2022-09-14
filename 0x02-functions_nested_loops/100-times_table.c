#include "main.h"

/**
 * print_times_table - function
 * @n: integer
 * return: result
 *
 */

void print_times_table(int n)
{
	int num, mul, res;

	if (n < 0 || n > 15)
		return;
	for (num = 0; num <= n; num++)
	{
		for (mul = 0; mul <= n; mul++)
		{
			res = num * mul;
			if (mul == 0)
				_putchar('0' + res);
			else if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res);
			}
			else if (res < 100)
			{
				_putchar(' ');
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
			}
			else
			{
				_putchar('0' + res / 100);
				_putchar('0' + (res - 100) / 10);
				_putchar('0' + res % 10);
			}
			if (mul < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: intger
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i *= -1;
	_putchar('0' + i);
	return (i);
}

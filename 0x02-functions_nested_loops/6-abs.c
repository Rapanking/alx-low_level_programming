#include "main.h"

/**
 * _abs - computes the absolute value of an int
 *
 * @n: integer
 *
 * Return: absolute value of an int
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

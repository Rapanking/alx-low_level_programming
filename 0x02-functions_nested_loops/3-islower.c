#include "main.h"

/**
 * _islower - checks for lower case character
 *
 * @c: an integer
 *
 * Return: 1 lowercase 0 not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}

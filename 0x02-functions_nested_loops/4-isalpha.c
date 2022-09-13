#include "main.h"

/**
 * _isalpha - checks for letter
 *
 * @c: a letter
 *
 * Return: 1 if letter 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}

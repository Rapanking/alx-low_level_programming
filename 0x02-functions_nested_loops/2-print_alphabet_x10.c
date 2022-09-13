#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabet
 *
 */

void print_alphabet_x10(void)
{
	char ch;
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}

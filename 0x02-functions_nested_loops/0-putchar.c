#include "main.h"

/**
 * main - Entry point of the program
 * Desc: function that prints _putchar
 *	followes by a new line
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	char alph[] = "_putchar";

	for (n = 0; n <= 7; n++)
		_putchar(alph[n]);

	_putchar('\n');
	return (0);
}

#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 *		followed by a new line
 * @s: pointer to char
 */
void print_rev(char *s)
{
	int rev = 0, count;

	while (s[count++])
		rev++;

	for (count = rev - 1; count >= 0; count--)
		_putchar(s[count]);

	_putchar('\n');
}

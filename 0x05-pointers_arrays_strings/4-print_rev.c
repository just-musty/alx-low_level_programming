#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 *		followed by a new line
 * @s: pointer to char
 */
void print_rev(char *s)
{
	int i = 0;
	int count;

	while (s[i] != '\0')
		s[i++];

	for (count = i - 1; count >= 0; count--)
		_putchar(s[count]);

	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 *	starting with the first character, followed by a new line
 * @str: string to be print
 */
void puts2(char *str)
{
	int count = 0;

	rev = 0;

	while (str[count])
		rev++;
	for (count = 0; count < rev; count += 2)
		_putchar(str[count]);

	_putchar('\n');
}

#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times for character _
 */
void print_line(int n)
{
	int str;

	if (n > 0)
	{
		for (str = 0; str < n; str++)
			_putchar('_');
	}
	_putchar('\n');
}

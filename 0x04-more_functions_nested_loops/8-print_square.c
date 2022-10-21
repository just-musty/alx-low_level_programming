#include "main.h"

/**
 * print_square - print a square
 * @size: print size of the square
 */
void print_square(int size)
{
	int length;
	int breath;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (breath = 0; breath < size; breath++)
				_putchar('#');

			if (length == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}

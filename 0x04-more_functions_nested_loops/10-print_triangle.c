#include "main.h"

/**
 * print_triangle - function to print a triangle
 * @size: triangle to be printed
 */
void print_triangle(int size)
{
	int vertical;
	int horiz;

	if (size > 0)
	{
		for (vertical = 1; vertical <= size; vertical++)
		{
			for (horiz = size - vertical; horiz > 0; horiz--)
				_putchar(' ');

			for (horiz = 0; horiz < vertical; horiz++)
				_putchar('#');
			if (vertical == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}

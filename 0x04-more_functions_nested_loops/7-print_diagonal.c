#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: line to be printed
 */
void print_diagonal(int n)
{
	int dia;
	int space;

	if (n > 0)
	{
		for (dia = 0; dia < n; dia++)
		{
			for (space = 0; space < dia; space++)
				_putchar(' ');
			_putchar('\\');

			if (dia == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_most_numbers - print number 0 - 9 then a newline
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}
	_putchar('\n');
}

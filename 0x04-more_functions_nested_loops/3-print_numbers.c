#include "main.h"

/**
 * print_numbers - print number 0 through 9
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar((num % 10) + '0');
	_putchar(num);
}

#include "main.h"

/**
 * more_numbers - prints 0 - 14 by 10 times
 */
void more_numbers(void)
{
	int num;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14)
		{
			if (num > 0)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
g	_putchar('\n');
	}
}

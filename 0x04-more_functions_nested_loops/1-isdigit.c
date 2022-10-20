#include "main.h"

/**
 * _isdigit - print digits 0 through 9
 * @c: digits to print
 *
 * Return: 1 on success,
 *	otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
		return (1);
	else
		return (0);
}

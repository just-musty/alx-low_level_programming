#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list other_args;

	va_start(other_args, n);

	for (unsigned int i = 0; i < n; i++)
		int sum += va_arg(other_args, const unsigned int);

	va_end(other_args);

	return (sum);
}

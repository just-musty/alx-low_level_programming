#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * file: variadic_functions_h
 * desc: Header file containing prototypes for all functions
 *       used in the 0x10-variadic_functions directory.
 */

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif

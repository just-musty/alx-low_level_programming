#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: pointer to char
 * Return: length if true
 */
int _strlen(char *s)
{

	int length = 0;

	while (*s++)
		length++;

	return (length);
}

#include "main.h"

/**
 * *_strcat - Concatenates the string pointed to by @src,
 *		including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, dest_len = 0;

	while (dest[count++])
		dest_len++;

	for (count = 0; src[count]; count++)
		dest[dest_len++] = src[count];

	return (dest);
}

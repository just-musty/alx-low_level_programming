#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars,
 *		and initializes it with a specific char.
 * @size: size of array
 * @c: characters itself
 * Return: return t if true, NULL if t  = NULL
 *		and NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;


	if (t == NULL)
		return (NULL);

	t = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
}

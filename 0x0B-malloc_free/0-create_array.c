#include "main.h"

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


	t = malloc(size * sizeof(char));
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		if (size == 0)
			return (NULL);
		t[i] = c;
	}
	t[i] = '\0';
	return (t);
}

#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to
 *	a newly allocated space in memory,
 *	which contains a copy of the string given as a parameter.
 * @str: a pointer to duplicated string
 * Return: return dupl on success.
 */
char *_strdup(char *str)
{
	int i;
	int p = 0;
	char *dupl;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		p++;

	dupl = (char *)malloc((p + 1) * sizeof(char));

	for (i = 0; str[i]; i++)
	{
		if (dupl == NULL)
			return (NULL);
		dupl[i] = str[i];
	}
	dupl[p] = '\0';
	return (dupl);
}

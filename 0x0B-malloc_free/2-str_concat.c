#include "main.h"
#include <stdlib.h>

/**
 * *str_concat -  function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: return a pointer conc of the copied strings
 */
char *str_concat(char *s1, char *s2)
{
	int i, p = 0, conc_word = 0;
	char *conc;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s1 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		p++;

	conc = (char *)malloc(sizeof(char) * p);

	if (conc == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		conc[conc_word++] = s1[i];

	for (i = 0; s2[i]; i++)
		conc[conc_word++] = s2[i];

	return (conc);
}

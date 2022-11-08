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
	int i, p, conc_word;
	char *conc;

	if (s1 == 0)
		return ("");
	if (s2 == 0)
		return ("");

	for (i = 0; s1[i] || s2[i]; i++)
		p++;

	conc = (char *)malloc(p * sizeof(char));

	if (conc == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		conc[conc_word++] = s1[i];
	for (i = 0; s2[i]; i++)
		conc[conc_word++] = s2[i];
	return (conc);
}

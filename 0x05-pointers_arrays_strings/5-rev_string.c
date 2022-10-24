#include "main.h"

/**
 * rev_string - print function that reverses a string
 * @s: pointer to char
 */
void rev_string(char *s)
{
	int rev = 0;
	int count = 0;
	char name;

	while (s[count++])
		rev++;
	for (count = rev - 1; count >= rev / 2; count--)
	{
		name = s[count];
		s[count] = s[rev - count - 1];
		s[rev - count - 1] = name;
	}
}

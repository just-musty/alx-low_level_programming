#include <stdio.h>

/**
 * main -  a program that prints its name, followed by a new line
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 */
void main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
}

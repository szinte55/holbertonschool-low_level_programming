#include <stdio.h>

/**
 * main - program that prints all the arguments it receives
 * @argc: integer count of arguments
 * @argv: array of pointers to strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		puts(argv[x]);

	return (0);
}

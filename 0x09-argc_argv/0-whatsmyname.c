#include "holberton.h"
#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: integer count of arguments
 * @argv: array of pointers to strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void) argc;

	return (0);
}

#include "holberton.h"
#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: integer count of arguments
 * @argv: array of pointers to string arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void) argv;

	return (0);
}

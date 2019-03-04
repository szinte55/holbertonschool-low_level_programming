#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the product of two integers
 * passed to the command line
 * @argc: integer count of arguments
 * @argv: array of pointers to strings
 * Return: 0 for multiplication success and 1 otherwise
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * passed to the command line
 * @argc: integer count of arguments
 * @argv: array of pointers to strings
 * Return: 0 for addition success, and 1 if characters are not digits
 */
int main(int argc, char **argv)
{

	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]  > '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				continue;
			else if (argv[i][j] == '-' && j == 0)
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}

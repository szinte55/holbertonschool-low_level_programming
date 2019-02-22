#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int h;

	for (h = 0; h <= 9 ; h++)
		printf("%d", h);
	printf("\n");
	return (0);
}

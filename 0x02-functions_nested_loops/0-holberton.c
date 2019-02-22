#include "holberton.h"
/**
 * main - print the string "Holberton"
 * Return: Always 0(success)
 */
int main(void)
{
	char A[] = "Holberton\n";
	unsigned int i;

	for (i = 0; i < sizeof(A) - 1; i++)
		_putchar(A[i]);
	return (0);
}

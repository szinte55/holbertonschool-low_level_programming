#include "holberton.h"
/**
 * print_alphabet - function that prints lower case alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	unsigned int i;
	char A[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i <  sizeof(A) - 1; i++)
		_putchar(A[i]);
	_putchar('\n');
}

#include <stdio.h>
/**
 * main - print all single digit numbers in base 10 starting from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}


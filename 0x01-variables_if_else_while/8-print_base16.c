#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 * Return: Always 0(success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
		putchar (i);

	for (j = 'a'; j < 'g'; j++)
		putchar (j);
	putchar ('\n');
	return (0);
}

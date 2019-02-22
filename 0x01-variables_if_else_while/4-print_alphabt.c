#include <stdio.h>
/**
 * main - Output the alphabet in lower case, except for q and e.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char h = 'a';

while (h <= 'z')
{
	if (h != 'q' && h != 'e')
		putchar (h);
	h++;
}
putchar('\n');
return (0);
}

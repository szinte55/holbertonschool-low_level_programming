#include <stdio.h>
/**
 *main - print lowercase alphabet in reverse
 *Return: Always 0 (success)
 */
int main(void)
{
	char h;

	for (h = 'z'; h >= 'a'; h--)
		putchar(h);
	putchar('\n');
	return (0);
}

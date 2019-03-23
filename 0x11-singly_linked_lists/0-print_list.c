#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list -  function that prints all the elements of a list_t list
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}

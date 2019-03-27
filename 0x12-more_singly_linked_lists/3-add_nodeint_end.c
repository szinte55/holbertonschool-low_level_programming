#include "lists.h"


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new;
	ptr = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new -> n = n;
	new -> next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while ( ptr -> next != NULL)
		ptr = ptr -> next;

	ptr->next = new;

	return (*head);
}

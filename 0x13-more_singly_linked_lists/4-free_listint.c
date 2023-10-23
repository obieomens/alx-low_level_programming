#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: pointer to the head of list_t list
 */

void free_listint(listint_t *head)
{
listint_t *c, *next_node;
	c = head;
	while (c != NULL)
	{
		next_node = c->next;
		free(c);
		c = next_node;
	}
}

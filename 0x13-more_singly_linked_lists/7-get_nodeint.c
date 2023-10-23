#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: A pointer to the head of listint_t list
 * @index: the index of the node, starting at 0
 * Return: A pointer to the nth node, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *c = head;
	for (i = 0; c != NULL && i < index; i++)
		c = c->next;
	return (c);
}

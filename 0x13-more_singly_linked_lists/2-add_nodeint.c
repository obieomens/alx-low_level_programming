#include "lists.h"

/**
 * add_nodeint - Adds a new node at the head of listint_t list
 * @head:A pointer to a pointer to the head of the listint_t
 * @n: new node
 * Return: element of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}


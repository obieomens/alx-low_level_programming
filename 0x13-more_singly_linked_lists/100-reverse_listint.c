#include "lists.h"
/**
 * reverse_listint - reverses a linkint_t linked list
 * @head: pointer to the pointer to the listint_t list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *previous;
listint_t *next_node;
	if (head == NULL || head == NULL)
	{
	return (NULL);
	}
	previous = *head;
	*head = previous->next;
	previous->next = NULL;
	while (*head != NULL)
	{
	next_node = (*head)->next;
	(*head)->next = previous;
	previous = *head;
	if (next_node  == NULL)
	return (*head);
	*head = next_node;

	if (*head == NULL)
	{
	*head = previous;
	return (*head);
	}
	}
return (NULL);
}

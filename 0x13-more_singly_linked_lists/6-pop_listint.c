#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: A pointer to the pointer of the listint_t list
 * Return: data n of the node head or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
int d = 0;
listint_t *tmp;
	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	d = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (d);
}

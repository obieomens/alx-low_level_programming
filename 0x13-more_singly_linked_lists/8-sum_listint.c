#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 * Return: The sum of all the data (n), or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
int s = 0;
listint_t *c = head;
	while (c != NULL)
	{
		s += c->n;
		c = c->next;
	}
	return (s);
}

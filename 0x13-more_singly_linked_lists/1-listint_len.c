#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of listint_t list
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
size_t element_count = 0;
	while (h != NULL)
	{
		h = h->next;
	element_count++;
	}
	return (element_count);
}

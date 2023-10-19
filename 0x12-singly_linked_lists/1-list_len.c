#include "lists.h"
/**
 * list_len - Returns the number of elements in a list_t list
 * @h: A pointer to the head of the list_t list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
int i;
	if (h == NULL)
	{
		return (0);
	}
	for (i = 1; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}

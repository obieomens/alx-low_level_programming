#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: A pointer to the head of the list_t list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
int i;
	if (h == NULL)
	{
	return (0);
	}
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (i);
}


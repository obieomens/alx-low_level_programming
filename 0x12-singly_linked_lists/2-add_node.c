#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 * @s: is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: A pointer to a pointer to the head of the list_t list
 * @str: The string to be duplicated and stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *add;
	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;
	return (add);
}


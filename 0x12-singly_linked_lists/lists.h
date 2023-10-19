#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
int _putchar(char c);
/**
 * struct list_s - stringly linked list
 * @str: malloc string
 * @len: length of the string
 * @next: pointer to the node
 */


typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif

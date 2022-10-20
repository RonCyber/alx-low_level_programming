#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - length of list_t struct
 * @h: head node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}

	return (number);
}

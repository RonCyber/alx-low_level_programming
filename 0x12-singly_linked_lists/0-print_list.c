#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints a list
 * @h: head of list
 * Return: number of elements
 */
size_t print_list(const list_t *i)
{
	int number = 0;

	while (i != NULL)
	{
		if (i->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", i->len, i->str);
		 i = i->next;
		++;
	}
	return (number);
}

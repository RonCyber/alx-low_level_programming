#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = malloc(nmemb * size);
	if (j == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		j[i] = 0;

	return (j);
}

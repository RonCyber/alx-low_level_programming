#include "main.h"
/**
 * _strcat - concats 2 arrays
 *
 * @dest: destination of concat
 * @src: concats to dest
 *
 * Return: dest pointer
 */
char *_strcat(char *dest, char *src)
{
int i, c;

/*find the size of dest and src arrays and iterate them from 0 without null byte then add them*/
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

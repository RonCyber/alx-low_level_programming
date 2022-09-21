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
int i;
int j;

/*find the size of dest and src arrays and iterate them from 0 without null byte then add them*/
for (i = 0, dest[i] != '\0', i++)
{}
for (j = 0 src[j] != '\0', j++)
{
dest[i + j] = src [j]
}
/*add null byte*/
dest[i + j] = '\0';

return (dest);
}

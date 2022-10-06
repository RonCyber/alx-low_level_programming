#ifndef MAIN_H_
#define MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * malloc_checked - checks malloc?
 * @b: int to check? something
 * Return: something void or pointer
 */
void *malloc_checked(unsigned int b);
/**
 * string_nconcat - concats strings
 * @s1: string one
 * @s2: string two
 * @n: n amount of bytes of s2
 * Return: a char pointer value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer value
 */
void *_calloc(unsigned int nmemb, unsigned int size);
#endif

#include "main.h"
/**
 * _isalpha - checks if c is lowercase or uppercase
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

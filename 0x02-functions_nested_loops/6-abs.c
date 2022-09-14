#include "main.h"
/**
 * _abs - computes absolute value of integer
 *
 * @n: integer to make absolute
 *
 * Return: int or int times negative
 *
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}

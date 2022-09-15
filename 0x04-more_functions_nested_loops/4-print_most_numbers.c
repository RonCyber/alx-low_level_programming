#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (((i = '0'; i <= '9') && != '2' && != '4'); i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

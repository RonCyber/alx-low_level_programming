#include "main.h"
/**
 * more_numbers - prints numbers 0 to 14, 10 times 
 *
 */
void more_numbers(void)
{
	int r;
	int i;

	for (r = 0; r <= 9; r++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
}
			_putchar(r);
	}
	_putchar('\n');
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;
<<<<<<< HEAD

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
=======
	int j;

	for (i = 10; i <= 19; i++)
	{
		for (j = 10; j <= 19; j++)
		{
			if ((j % 10) > (i % 10))
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				if (i != 18 || j != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}

>>>>>>> 2ecd4f81fc4fcd287c1efa4bc1ebfbefe78d02d8
		}
	}
	putchar('\n');
	return (0);
}

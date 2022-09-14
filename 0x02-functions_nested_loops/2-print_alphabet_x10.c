#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase followed by a new line
 *
 * Return: Always 0
 *
 */
void print_alphabet_x10(void)
{
char a;
char i;

for (a = 0; a <= 9; a++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}

#include "maim.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char  *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include "main.h"

/**
 * print_diagonal - printing lines diagona.
 *
 *@n: input variable
 *
 * Return: Always void
 */

void print_diagonal(int n)
{
	int c, i;

	for (c = 0; c < n; c++)
	{
		for (i = 0; i < c; i++)
		{
			_putchar(32);
		}
			_putchar(92);
			_putchar('\n');
	}
		if (n <= 0)
		{
			_putchar('\n');
		}
}

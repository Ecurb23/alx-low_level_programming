#include "main.h"

/**
 * print_square - prints a square of size size.
 *
 *@size: size of the square
 *
 * Return: Always void
 */

void print_square(int size)
{
	int j, i;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
	if (size <= 0)
	_putchar('\n');
}

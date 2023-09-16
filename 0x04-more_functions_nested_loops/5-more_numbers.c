#include "main.h"

/**
 * more_numbers - print the numbers form 0-14 10 times
 *
 *variable
 *
 * Return: Always void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
			}
			if (j <= 14)
			{
				_putchar('0' + (j % 10));
			}
		}
		_putchar('\n');

	}
}

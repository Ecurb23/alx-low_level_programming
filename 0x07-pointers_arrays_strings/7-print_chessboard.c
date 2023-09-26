#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Funtion that prints the chessboard.
 * @a: pointer to pieces to print
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		}
}

#include "main.h"
#include <stdio.h>
/**
 * puts2 - Print one char out of 2 of a string.
 * @str: Type char pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		if (s % 2 == 0)
		{
			_putchar(str[s]);
		}
	}
	_putchar('\n');
}

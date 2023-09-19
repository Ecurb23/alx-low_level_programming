#include "main.h"
#include <stdio.h>
/**
 * puts_half - Print half of string.
 * @str: Type char pointer
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		s++;
	}
	for (s /= 2; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * _islower - lowercase check
 * Return: is always 0
 * @c: the character in ascii
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

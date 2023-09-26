#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: the string to be searched
 * @c: the character to be located
 * Return: if found pointer to first occurence else null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}

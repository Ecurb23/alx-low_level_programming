#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: Type char pointer
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int str_len = 0;

	while (s[str_len])
		str_len++;
	return (str_len);
}

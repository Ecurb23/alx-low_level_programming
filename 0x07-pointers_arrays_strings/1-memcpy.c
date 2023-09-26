#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory to area
 * @dest: to memory area
 * @src: bytes from memory area
 * @n: function copies
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

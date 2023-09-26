#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Search for a string of any set of bytes.
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 * Return: if matched pointer to matched byte else null
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

    while (*s)
    {
        for (index = 0; accept[index]; index++)
        {
            if (*s == accept[index])
                    return (s);     
        }   
        s++;
    }
	return (NULL);
}

#include "main.h"
/**
 * _abs - entry point
 * @i: parameter
 * Return: is always 0
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

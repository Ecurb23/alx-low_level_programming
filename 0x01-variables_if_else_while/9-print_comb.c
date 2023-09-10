#include <stdio.h>
/**
 * main - entry point
 * Return: is always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);

		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar('\n');
	}
	putchar('\n');
	return (0);
}

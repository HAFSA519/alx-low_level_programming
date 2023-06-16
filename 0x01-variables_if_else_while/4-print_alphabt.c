#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	e = 'e';
	q = 'q';

	for (i = 97; i <= 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
		putchar('\n');
		return (0);
}

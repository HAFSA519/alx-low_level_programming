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

	int i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' && i == 'q')
		{
			i += 1;
		}
		else
		{
		putchar(i);
		i += 1;
		}
	}
		putchar('\n');
		return (0);
}

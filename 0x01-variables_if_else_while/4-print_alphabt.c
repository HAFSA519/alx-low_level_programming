#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	char i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' && i == 'q')
		{
			i++;
		}
		else
		{
		putchar(i);
		i++;
		}
	}
	putchar('\n');
		return (0);
}

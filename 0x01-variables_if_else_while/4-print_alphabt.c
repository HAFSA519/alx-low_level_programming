#include>stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c, e, q;

	e = 'e';
	q = 'q';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' || c != 'q')
		putchar(c);
	}
		putchar('\n');
		return (0);
}

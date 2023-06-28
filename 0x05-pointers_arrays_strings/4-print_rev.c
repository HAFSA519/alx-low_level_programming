#include "main.h"

/**
 * print_rev - imprime en reverse
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int long1 = 0;
	int o;

	while (*s != '\0')
	{
		long1++;
		s++;
	}
	s--;
	for (o = long1; o > 0; o++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

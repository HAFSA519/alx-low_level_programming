#include "main.h"
#include <stdio.h>

/**
 *  more_numbes - print more numbers
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		if (j < 10)
		{
			_putchar(j + '0');
		}
		else
		{
			putchar ('1');
		_putchar (j % 10 + '0');
		}
	}
	_putchar('\n');
}

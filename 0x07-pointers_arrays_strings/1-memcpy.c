#include <stddef.h>
#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest:memory where is stored
 * @src: memory where is copied
 * @n: number off bytes
 *
 * Return: copied memory with n bited changed
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

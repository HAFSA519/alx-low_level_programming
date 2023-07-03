#include <stdio.h>
#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Retuen: Always 0
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}

int main(void)
{
char str[] = "Hello, world!";
char *result = _strchr(str, 'o');
if (result != NULL)
{
printf("Character found at position: %ld\n", result - str);
}
else
{
printf("Character not found.\n");
}
return (0);
}

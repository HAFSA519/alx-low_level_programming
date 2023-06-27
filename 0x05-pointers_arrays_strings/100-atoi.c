#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */


int _atoi(char *s)
{
int digit, i, len, m, f, a;

i = 0;
m = 0;
digit = 0;
f = 0;
a = 0;

while (s[len] != '0')
len++;
while (i < len && f == 0)
{
if (s[i] == '-')
m++;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (m % 2)
digit = -digit;
a = a * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')

break;

f = 0;
}
i++;
}
if (f == 0)
return (0);
return (a);
}

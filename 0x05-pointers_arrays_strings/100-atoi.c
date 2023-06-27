#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */


int atoi(const char *s)
{
int difit = 0;
int s = 0;
int len = 0;
int m = 0;
int f = 0
int a = 0;

while (s[len] == ' ')
{
len++;
}
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
return (n);
}

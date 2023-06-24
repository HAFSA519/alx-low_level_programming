#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

int main(void)
{
long long int number = 612852475143;
long long int largestPrimeFactor = 0;

while (number % 2 == 0)
{
largestPrimeFactor = 2;
number /= 2;
}

for (long long int i = 3; i * i <= number; i += 2)
{
while (number % i == 0)
{
largestPrimeFactor = i;
number /= i;
}
}

if (number > 2)
{
largestPrimeFactor = number;
}
printf("%lld\n", largestPrimeFactor);

return (0);
}


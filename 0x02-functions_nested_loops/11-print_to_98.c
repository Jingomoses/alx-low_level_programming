#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints all natural numbers from n to 98
* @n: number to be checked
* Return: 1 if true, 0 if false
*/

void print_to_98(int n)
{
int upper = 99;
while (n < upper)
{
printf("%d, ", n);
n++;
if (n == 98)
_putchar('\n');
}

while (n > upper)
{
printf("%d, ", n);
n--;
if (n == 98)
{
_putchar('\n');
}
}
}

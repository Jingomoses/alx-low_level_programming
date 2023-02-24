#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: number to be checked
* Return: 1 if true, 0 if false
*/

int print_last_digit(int n)
{
int x = n % 10;
if (x < 0)
{
x = x * -1;
}
_putchar(x + '0');
return (x);
}

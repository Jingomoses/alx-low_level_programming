#include <stdio.h>
/**
* main - main function initialised
* Description: 'print combinations of single-digit numbers.'
* Return: Always 0 (success)
*/
int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
if (num != 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}

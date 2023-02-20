#include <stdio.h>
/**
* main - main function initialised
* Description: 'prints all single digit numbers of base 10 starting from 0'
* Return: Always 0 (success)
*/
int main(void)
{
int a = 0;
while (a < 10)
{
putchar(a + '0');
a++;
}
putchar('\n');
return (0);
}

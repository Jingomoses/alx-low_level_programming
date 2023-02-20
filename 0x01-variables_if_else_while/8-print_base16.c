#include <stdio.h>
/**
* main - main function initialised
* Description: 'prints all the numbers of base 16 in lowercase'
* Return: Always 0 (success)
*/
int main(void)
{
int num = 0;
char lett = 'a';
while (num < 10)
{
putchar(num + '0');
num++;
}
while (lett >= 'a' && lett < 'g')
{
putchar(lett);
++lett;
}
putchar('\n');
return (0);
}

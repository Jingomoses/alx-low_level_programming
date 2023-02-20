#include <stdio.h>
/**
* main - main function initialised
* Description: 'prints the lowercase alphabet in reverse'
* Return: Always 0 (success)
*/
int main(void)
{
char l = 'z';
while (l >= 'a')
{
putchar(l);
--l;
}
putchar('\n');
return (0);
}

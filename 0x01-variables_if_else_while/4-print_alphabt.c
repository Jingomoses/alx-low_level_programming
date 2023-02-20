#include <stdio.h>
/**
* main - main function initialised
* Description: 'Print all the letters except q and e'
* Return: Always 0 (success)
*/
int main(void)
{
char l = 'a';
while (l <= 'z')
{
if (l == 'e' || l == 'q')
{
++l;
}
putchar(l);
++l;
}
putchar('\n');
return (0);
}

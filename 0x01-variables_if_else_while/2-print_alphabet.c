#include <stdio.h>
#include <ctype.h>
/**
* main - main function initialised
* Description: ' the alphabet game'
* Return: Always 0 (success)
*/
int main(void)
{
char L = 'a';
while (L <= 'z')
{
putchar(L);
++L;
}
putchar('\n');
return (0);
}

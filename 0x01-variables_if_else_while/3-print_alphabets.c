#include <stdio.h>
#include <ctype.h>
/**
* main - main function initialised
* Description: ' the alphABET'
* Return: Always 0 (success)
*/
int main(void)
{
char l = 'a';
char L = 'A';
while (l <= 'z')
{
putchar(l);
++l;
}
while (L <= 'Z')
{
putchar(L);
++L;
}
putchar('\n');
return (0);
}

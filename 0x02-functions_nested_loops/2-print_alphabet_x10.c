#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times
* Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{

int i;
for (i = 0; i < 10; i++)
{
char nn = 'a';
while (nn <= 'z')
{
_putchar(nn);
++nn;
}
_putchar('\n');
}
}

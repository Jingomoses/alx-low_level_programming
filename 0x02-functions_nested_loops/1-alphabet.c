#include "main.h"
/**
* print_alphabet - prints the alphabet
* Return: Always 0 (success)
*/

void print_alphabet(void)
{
char nn = 'a';
while (nn <= 'z')
{
_putchar(nn);
++nn;
}
_putchar('\n');
}

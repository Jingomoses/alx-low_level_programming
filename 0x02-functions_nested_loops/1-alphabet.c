#include "main.h"
/**
* main - main function initialised
* description - 'the alphabet game'
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

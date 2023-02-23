#include "main.h"

/**
 * print alphabet - the alphabet game
 * Return: void
 */

void print_alphabet(void)
{
char nn = 'a';
while(nn <= 'z')
{
_putchar(nn);
++nn;
}
_putchar('\n');
}

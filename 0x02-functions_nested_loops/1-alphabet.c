#include "main.h"
/**
* main - main function initialised to print
* Description: 'printing the alphabet game'
* Return: Always 0 (success)
*/

void print_alphabet(void)
{
char xter = 'a';

while (xter <= 'z')
{
_putchar(xter);
++xter;
}
_putchar('\n');
}

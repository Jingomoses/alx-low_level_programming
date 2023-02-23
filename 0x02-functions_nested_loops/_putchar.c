#include <unistd.h>
/**
* _puchar: function to write character by character
* &a: the character to be written.
* Return: Always 1 (success), -1 for error
*/


int _putchar(char a)
{
return (write(1, &a, 1));
}

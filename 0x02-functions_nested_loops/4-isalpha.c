#include "main.h"
#include <ctype.h>

/**
* _isalpha - returns true if alpha case
* @c: character to be checked
* Return: 1 if true, 0 if false
*/

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
return (0);
}

#include "main.h"
#include <ctype.h>

/**
* _islower - returns true if lower case
* @c: character to be checked
* Return: 1 if true, 0 if false
*/

int _islower(int c)
{
if (islower(c))
{
return (1);
}
return (0);
}

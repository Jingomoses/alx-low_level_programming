#include <stdio.h>
/**
* main - main function initialised
* Description: 'prints different combinations of two digits'
* Return: Always 0 (success)
*/
int main(void)
{
int a;
int b;

for (a = '0'; a < '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
if (a != b)
{
putchar(a);
putchar(b);
if (a == '8' && b == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

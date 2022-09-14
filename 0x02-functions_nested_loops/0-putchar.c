#include "main.h"
#include "_putchar.h"
/**
* main - print putchar
*
*Description: out oof the main. print putchar
*
*Return: void
*/
int main(void)
{
char c[10] = "_putchar";
int i = 0;
while (i < 9)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}

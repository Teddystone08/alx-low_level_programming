#include "main.h"
/**
* main - print putchar
*
*Description: out oof the main. print putchar
*
*Return: void
*/
int main(void)
{
char func[10] = "_putchar";
int count  = 0;
int arrlen = sizeof(func) / sizeof(*func);
while (count < arrlen)
{
_putchar(func[count]);
count++;
}
_putchar('\n');
return (0);
}

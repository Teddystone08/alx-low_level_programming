
#include "putchar.h"
/**
*main - print the string  "putchar"
*Return: 0 (Success)
*/
int main(void)
{
chat c[] = "putchar";
int i;

for (i = 0; i < 9; i++)
{
	_putchar(c[i]);
}
_putchar('\n');
return (0);

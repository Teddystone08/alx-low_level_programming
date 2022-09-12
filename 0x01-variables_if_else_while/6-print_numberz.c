#include <stdio.h>
/**
*main - print alphabet
*
*Description: using the main function
*this program prints "programming alphabet followed by new line"
*Return: 0
*/
int main(void)
{
int c;
for (c = 0 ; c < 10 ; c++)
{
putchar((c % 10) + '0');
}
putchar('\n');
return (0);
}

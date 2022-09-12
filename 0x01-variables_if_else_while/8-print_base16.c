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
char c;
for (c = 'a' ; c <= '9' ; c++)
{
	putchar(c);
}
for (c = 'a' ; c <= 'f' ; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}

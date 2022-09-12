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
int num;
char alpha;

for (num = 0 ;num < 10; num++)
{
	putchar((num % 10) + '0');
}
for (alpha = 'a' ; alpha <= 'f' ; alpha++)
{
	putchar(alpha);
}
putchar('\n');
return (0);
}

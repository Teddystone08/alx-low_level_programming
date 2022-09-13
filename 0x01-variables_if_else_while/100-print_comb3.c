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
int i;
int j;

for (i = 0 ; i <= 10 ; 1++)
{
for (j = 0 ; j < 10 ; j++)
{
putchar(num1 + '0');
putchar(num2 + '0');

if (i == 9 && j == 9)
{
break ;
}

putchar(',');
putchar(' ');
}
}
putchar('\n')
return (0);
